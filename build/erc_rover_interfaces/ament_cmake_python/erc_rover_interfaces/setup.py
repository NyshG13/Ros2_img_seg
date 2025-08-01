from setuptools import find_packages
from setuptools import setup

setup(
    name='erc_rover_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('erc_rover_interfaces', 'erc_rover_interfaces.*')),
)
