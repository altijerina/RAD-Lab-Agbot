from setuptools import find_packages
from setuptools import setup

setup(
    name='agbot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('agbot_msgs', 'agbot_msgs.*')),
)
