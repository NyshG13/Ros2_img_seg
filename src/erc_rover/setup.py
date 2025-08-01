from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'erc_rover'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/' + package_name, ['package.xml']),
        # Install any launch files or other resources
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='naysha',
    maintainer_email='nayshagupta27@gmail.com',
    description='TODO: Package description',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'camera = erc_rover.camera_integ:main',
		'img_segmentation = erc_rover.grounded_sam2_tracking_camera_with_continuous_id:main',
		'pipeline_node = erc_rover.new_pipeline:main',
		'position = erc_rover.position_data:main',
        ],
    },
)
