from setuptools import setup

package_name = 'ros2_whisper'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Seu Nome',
    author_email='seu_email@exemplo.com',
    description='Pacote ROS2 para usar Whisper da OpenAI',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'whisper_node = ros2_whisper.whisper_node:main',  # Node principal
        ],
    },
)

