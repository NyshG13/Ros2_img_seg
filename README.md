# 🚀 Perception Pipeline Package

This project is a ROS 2 perception pipeline designed for an autonomous rover, designed for the European Rover Challenge (ERC). It leverages state-of-the-art AI models to detect, track, analyze, and report on anomalous objects in a Mars-like environment.

The pipeline processes a live camera feed to identify objects based on text prompts, tracks them continuously, calculates their real-world GPS coordinates, performs a detailed scientific analysis using a Vision-Language Model (VLM), and compiles all findings into a formal PDF report.

## Features

- **🔍 Zero-Shot Object Detection:** Uses **GroundingDINO** to detect objects based on flexible text prompts (we use a broad prompt "object.").
- **🎨 High-Performance Segmentation:** Employs **SAM 2 (Segment Anything Model 2)** for precise, real-time object segmentation and tracking across video frames.
- **🧠 Intelligent Analysis:** Integrates the **Qwen-VL** model to provide detailed, context-aware scientific descriptions of detected objects from their images.
- **📍 Geospatial Localization:** Calculates the GPS coordinates of each unique object by fusing camera pixel data, depth information, and the rover's own GPS and IMU data.
- **📑 Automated Reporting:** Generates a comprehensive **PDF report** at the end of the mission, documenting each unique anomaly with its image, class, and AI-generated analysis.
- **⚙️ ROS 2 Integration:** Built as a modular ROS 2 workspace with custom services for robust, real-time data exchange between components.
    

---

## 🏗️ System Architecture

The pipeline operates through a set of interconnected ROS 2 nodes and services.

**Data Flow:**

1. **Sensors:** The position node subscribes to /gps/fix, /imu/data, and /camera/depth/image_raw.
    
2. **Camera Feed:** The pipeline_node subscribes to /image_raw.
    
3. **Detection & Segmentation:** Objects are detected with [GroundingDINO](https://github.com/IDEA-Research/GroundingDINO) and segmented/tracked with [SAM 2](https://github.com/facebookresearch/sam2).
    
4. **Analysis Pipeline (per new object):**
    
    - Fetch GPS, yaw, and depth data from services.
        
    - Calculate real-world GPS coordinates.
        
    - Crop the object image and send it to [Qwen2.5-VL](https://github.com/QwenLM/Qwen2.5-VL) for analysis.
        
    - Save results (image + metadata + analysis).
        
    
5. **Visualization:** Annotated video feed is shown in real time.
    
6. **Reporting:** On shutdown, a **final PDF report** is generated.
    

---

## Packages

- `erc_rover`: A Python package containing the core application logic, including all nodes for tracking, analysis, and sensor data processing.
    
- `erc_rover_interfaces`: A C++ package defining the custom ROS 2 services used for communication between the pipeline and sensor nodes.
    

### Nodes

- `pipeline_node`: The main executable that orchestrates the entire perception pipeline.
    
- `position`: A service provider node that subscribes to raw sensor topics and serves processed GPS, Yaw, and Depth data.
    
- `camera`: A simple utility node for viewing the raw camera feed directly.
    
- `img_segmentation`: A standalone script for testing the Grounded-SAM 2 tracking functionality independently.

    
- **Git** and **colcon**.
    
## 🚀 Installation & Setup

Before installation, ensure you have ROS 2 and Python 3.10+ installed. Ensure your device supports CUDA for Nvidia drivers. 

1. Install Grounding SAM 2:
	Follow instructions from the [Grounded SAM 2](https://github.com/IDEA-Research/Grounded-SAM-2) repo.

2. **Clone the Repository:**
    
    ```
    # Create a new ROS 2 workspace
    mkdir -p ~/erc_ws/src
    cd ~/erc_ws/src
    
    # Clone this repository
    git clone https://github.com/NyshG13/Ros2_img_seg.git
    ```
    
2. Install Python Dependencies:
    Install remaining dependencies using the following command:
    
    
    ```
    pip install transformers supervision fpdf geopy
    ```

3. **Build the ROS 2 Workspace:**
    
    
    ```
    cd ~/erc_ws
    colcon build --symlink-install
    ```

---

## How to Run

To run the core perception logic:

```
ros2 run erc_rover pipeline_node
```

### Command-Line Arguments

You can configure the pipeline node at launch:

- `--prompt`: Change the object detection query.

    ```
    ros2 run erc_rover pipeline_node --ros-args -p prompt:="metallic debris."
    ```
    
- `--camera_topic`: Specify a different camera topic.
    
- `--output_dir`: Set a custom directory for saving results.
    
- `--fps`: Throttle the processing to a specific frames-per-second target.
    


## 📊 Expected Output

- **Live Annotated Feed:** An OpenCV window titled "Live Pipeline" will show the camera feed with segmented objects, bounding boxes, and tracker IDs overlaid.
    
- **Console Logs:** Detailed logs in the terminal will show frame processing status, new object detections, and analysis results.
    
- **Saved Object Data:** In the `outputs/detected_objects/` directory (or your custom output directory), cropped images of each unique object will be saved.
    
- **Final PDF Report:** Upon stopping the node (Ctrl+C), a file named `marsyard_anomaly_report.pdf` will be generated in the `outputs/` directory, containing a detailed summary of all findings.
