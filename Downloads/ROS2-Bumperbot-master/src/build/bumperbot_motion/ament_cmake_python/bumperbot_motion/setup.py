from setuptools import find_packages
from setuptools import setup

setup(
    name='bumperbot_motion',
    version='0.0.0',
    packages=find_packages(
        include=('bumperbot_motion', 'bumperbot_motion.*')),
)
