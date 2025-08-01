# #!/usr/bin/env python3
# import rospy
# import numpy as np
# from sensor_msgs.msg import NavSatFix, Imu, Image
# from cv_bridge import CvBridge
# import tf
# import math

# from final_pipeline_interfaces.srv import GetGPS, GetGPSResponse
# from final_pipeline_interfaces.srv import GetYaw, GetYawResponse
# from final_pipeline_interfaces.srv import GetDepth, GetDepthResponse

# # === Global variables updated by callbacks ===
# latest_gps = None
# latest_yaw_deg = None
# latest_depth_frame = None

# bridge = CvBridge()

# # === GPS Callback ===
# def gps_callback(msg):
#     global latest_gps
#     latest_gps = (msg.latitude, msg.longitude)

# # === IMU Callback (yaw in degrees) ===
# def imu_callback(msg):
#     global latest_yaw_deg
#     orientation_q = msg.orientation
#     quaternion = (orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w)
#     euler = tf.transformations.euler_from_quaternion(quaternion)
#     yaw_rad = euler[2]
#     latest_yaw_deg = math.degrees(yaw_rad)

# # === Depth Image Callback ===
# def depth_callback(msg):
#     global latest_depth_frame
#     try:
#         depth_image = bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")
#         latest_depth_frame = np.array(depth_image, dtype=np.float32)
#     except Exception as e:
#         rospy.logerr(f"Depth conversion error: {e}")

# def handle_get_gps(req):
#     if latest_gps:
#         return GetGPSResponse(latitude=latest_gps[0], longitude=latest_gps[1])
#     else:
#         rospy.logwarn("GPS data not yet available.")
#         return GetGPSResponse(latitude=float('nan'), longitude=float('nan'))

# def handle_get_yaw(req):
#     if latest_yaw_deg is not None:
#         return GetYawResponse(yaw_deg=latest_yaw_deg)
#     else:
#         rospy.logwarn("Yaw data not yet available.")
#         return GetYawResponse(yaw_deg=float('nan'))

# def handle_get_depth(req):
#     if latest_depth_frame is None:
#         rospy.logwarn("Depth frame not available.")
#         return GetDepthResponse(depth=float('nan'))
    
#     h, w = latest_depth_frame.shape
#     x, y = req.x, req.y

#     if 0 <= x < w and 0 <= y < h:
#         depth = latest_depth_frame[y, x]
#         return GetDepthResponse(depth=float(depth) if not np.isnan(depth) else float('nan'))
#     else:
#         rospy.logwarn("Pixel out of bounds.")
#         return GetDepthResponse(depth=float('nan'))


# if __name__ == "__main__":
#     rospy.init_node("sensor_fetcher")

#     rospy.Subscriber("/gps/fix", NavSatFix, gps_callback)
#     rospy.Subscriber("/imu/data", Imu, imu_callback)
#     rospy.Subscriber("/camera/depth/image_raw", Image, depth_callback)

#     # Define services
#     gps_service = rospy.Service("get_gps", GetGPS, handle_get_gps)
#     yaw_service = rospy.Service("get_yaw", GetYaw, handle_get_yaw)
#     depth_service = rospy.Service("get_depth", GetDepth, handle_get_depth)

#     rospy.loginfo("Sensor node running...")
#     rospy.spin()  # Keeps the node alive

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import NavSatFix, Imu, Image
from cv_bridge import CvBridge
import tf_transformations
import math

# Import the custom service definitions
from final_pipeline_interfaces.srv import GetGPS, GetYaw, GetDepth

class SensorFetcherNode(Node):
    """
    A ROS2 node that subscribes to sensor topics (GPS, IMU, Depth Image)
    and provides services to fetch the latest data.
    """
    def __init__(self):
        # Initialize the node with the name "sensor_fetcher"
        super().__init__("sensor_fetcher")

        # === Class members to store the latest sensor data ===
        self.latest_gps = None
        self.latest_yaw_deg = None
        self.latest_depth_frame = None
        self.bridge = CvBridge()

        # === QoS Profile for sensor data ===
        # Using a reliable, depth-of-10 profile is a common choice for sensor data
        qos_profile = rclpy.qos.QoSProfile(depth=10, reliability=rclpy.qos.QoSReliabilityPolicy.RELIABLE)


        # === Subscribers ===
        # create_subscription(msg_type, topic_name, callback, qos_profile)
        self.gps_subscriber = self.create_subscription(
            NavSatFix, "/gps/fix", self.gps_callback, qos_profile
        )
        self.imu_subscriber = self.create_subscription(
            Imu, "/imu/data", self.imu_callback, qos_profile
        )
        self.depth_subscriber = self.create_subscription(
            Image, "/camera/depth/image_raw", self.depth_callback, qos_profile
        )

        # === Services ===
        # create_service(service_type, service_name, callback)
        self.gps_service = self.create_service(GetGPS, "/get_gps", self.handle_get_gps)
        self.yaw_service = self.create_service(GetYaw, "/get_yaw", self.handle_get_yaw)
        self.depth_service = self.create_service(GetDepth, "/get_depth", self.handle_get_depth)

        self.get_logger().info("Sensor fetcher node has been started. 🚀")

    # === Subscriber Callbacks ===
    def gps_callback(self, msg):
        """Stores the latest GPS latitude and longitude."""
        self.latest_gps = (msg.latitude, msg.longitude)

    def imu_callback(self, msg):
        """Calculates and stores the latest yaw in degrees from IMU quaternion."""
        orientation_q = msg.orientation
        quaternion = (orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w)
        # Note: In ROS2, consider using tf_transformations library
        euler = tf_transformations.euler_from_quaternion(quaternion)
        yaw_rad = euler[2]
        self.latest_yaw_deg = math.degrees(yaw_rad)

    def depth_callback(self, msg):
        """Converts and stores the latest depth image frame."""
        try:
            depth_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")
            self.latest_depth_frame = np.array(depth_image, dtype=np.float32)
        except Exception as e:
            self.get_logger().error(f"Depth conversion error: {e}")

    # === Service Handlers ===
    # Note the new signature: (request, response)
    def handle_get_gps(self, request, response):
        if self.latest_gps:
            response.latitude = self.latest_gps[0]
            response.longitude = self.latest_gps[1]
        else:
            self.get_logger().warn("GPS data not yet available.")
            response.latitude = float('nan')
            response.longitude = float('nan')
        return response

    def handle_get_yaw(self, request, response):
        if self.latest_yaw_deg is not None:
            response.yaw_deg = self.latest_yaw_deg
        else:
            self.get_logger().warn("Yaw data not yet available.")
            response.yaw_deg = float('nan')
        return response

    def handle_get_depth(self, request, response):
        if self.latest_depth_frame is None:
            self.get_logger().warn("Depth frame not available.")
            response.depth = float('nan')
            return response

        h, w = self.latest_depth_frame.shape
        x, y = request.x, request.y

        if 0 <= x < w and 0 <= y < h:
            depth = self.latest_depth_frame[y, x]
            # Ensure the response is a standard float, handling potential numpy types
            response.depth = float(depth) if not np.isnan(depth) else float('nan')
        else:
            self.get_logger().warn(f"Pixel coordinates ({x}, {y}) are out of bounds for image size ({w}, {h}).")
            response.depth = float('nan')
        return response


def main(args=None):
    rclpy.init(args=args)
    sensor_fetcher_node = SensorFetcherNode()
    try:
        # rclpy.spin() keeps the node running until it's shut down
        rclpy.spin(sensor_fetcher_node)
    except KeyboardInterrupt:
        pass
    finally:
        # Cleanly destroy the node and shut down rclpy
        sensor_fetcher_node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()