from setuptools import find_packages
from setuptools import setup

setup(
    name='bumperbot_utils',
    version='0.0.0',
    packages=find_packages(
        include=('bumperbot_utils', 'bumperbot_utils.*')),
)
