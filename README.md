# WI-FI Controlled Bot with STM32

## About The Project
The WiFi-Controlled Bot with STM32-Nucleo and ESP8266 Bolt IoT WiFi Module is an innovative robotics project that combines the power of STM32-Nucleo development board and the versatility of the ESP8266 Bolt IoT WiFi module to create a remotely controlled robotic vehicle. This project aims to provide an accessible and scalable platform for enthusiasts and developers to explore the realms of robotics and Internet of Things (IoT).

The main components of the system include the STM32-Nucleo development board, acting as the central processing unit and motor control interface. And the ESP8266 Bolt IoT WiFi module, responsible for wireless communication with the robot. The STM32-Nucleo is equipped with high-performance microcontrollers and GPIO pins to manage sensor inputs, motor control, and decision-making logic.

## Demo:
https://github.com/purviyeshi/WI-FI-Controlled-Bot-with-STM32/assets/129578264/29c6816b-e0b2-4c8b-a286-56d85876979b

## Hardware components used

| Components | Description     |
| :-------- | :------- | 
| *STM32-NUCLEO*(G071RB) | Microcontroller board|
|*ESP8266* Bolt IoT WiFi Module|WiFi communication|
|*TB6612FNG*|Motor Driver|
|Smartphone/Computer|Remote control|
|Chassis and Wheels|Physical structure.|
|+5V Battery Source|Power Supply|

### 1. STM32-Nucleo Development Board:
The STM32-Nucleo development board is a versatile platform designed by STMicroelectronics to facilitate rapid prototyping and development with STM32 microcontrollers.

#### STM32 G071RB Microcontroller Chip in STM32-Nucleo:
The STM32 G071RB is a member of the STM32G0 series, which is part of STMicroelectronics' ARM Cortex-M0+ based microcontroller family. It features a wide range of peripherals and features suitable for various embedded applications.

The STM32 G071RB microcontroller chip serves as the core processing unit of the robot. It is responsible for handling tasks such as motor control, sensor data processing, communication with the ESP8266 module, and decision-making logic. The microcontroller interacts with other components on the board through GPIO pins and various hardware interfaces

The STM32 G071RB microcontroller chip's processing power, GPIO pins, and hardware interfaces make it a suitable choice for managing the real-time operations of the robot. Its efficient execution of embedded C/C++ code enables the WiFi-Controlled Bot to respond promptly to user commands and environmental inputs.

Overall, the STM32 G071RB microcontroller chip, as a part of the STM32-Nucleo development board, empowers the WiFi-Controlled Bot project by providing the essential computational capabilities required for intelligent control, communication, and interaction of the robot.

### 2. ESP8266 Bolt IoT WiFi Module:
The ESP8266 Bolt IoT module provides WiFi connectivity and communication capabilities.
The ESP8266 module enables wireless communication between the robot and a remote device (like a smartphone). It facilitates control commands and data exchange.

### 3. TB6612FNG Motor Driver
The TB6612FNG is a dual H-bridge motor driver integrated circuit (IC) commonly used to control DC motors in robotics and electronics projects. It allows you to control the direction and speed of two DC motors independently. In this WiFi-Controlled Bot project, the TB6612FNG motor driver is employed to precisely control the movement of the robot's wheels.

## SOFTWARE USED 

### 1. STM32CubeIDE:

STM32CubeIDE is used to develop the firmware for the STM32-Nucleo board. It provides an intuitive and user-friendly interface for code development, debugging, and flashing the firmware to the microcontroller.
The IDE comes with pre-configured projects for STM32 microcontrollers, making it easier to set up the initial project structure and build configurations.
STM32CubeIDE integrates the STM32 HAL (Hardware Abstraction Layer) libraries, which provide an abstraction layer for the hardware peripherals of the STM32 microcontroller. This simplifies the code development process and allows you to focus on the application logic.

### 2. HAL (Hardware Abstraction Layer) Libraries::
The Hardware Abstraction Layer (HAL) GPIO library is an integral part of STMicroelectronics' STM32Cube software package, designed to simplify the configuration and management of General-Purpose Input/Output (GPIO) pins on STM32 microcontrollers. GPIO pins are crucial for interfacing with external components such as sensors, motor drivers, and LEDs. In the context of your WiFi-Controlled Bot project, the HAL GPIO library provides a higher-level abstraction, streamlining the process of setting up and controlling GPIO pins for various functionalities.

In this project, the HAL GPIO library is applied in multiple key areas. Firstly, it's used for precise motor control using the TB6612FNG motor driver. By configuring specific GPIO pins as outputs and toggling their states, the HAL GPIO library enables the control of motor direction and speed. This is pivotal in achieving accurate movement and maneuverability for the robot. Additionally, GPIO pins serve as interfaces for sensors like ultrasonic and infrared sensors. The HAL GPIO library simplifies the configuration of these pins as inputs and facilitates the reading of sensor data, enabling the robot to interact intelligently with its environment.

Moreover, the HAL GPIO library extends its utility to communication with the ESP8266 Bolt IoT module. The library assists in configuring GPIO pins for UART communication and other control signals, allowing seamless data exchange between the microcontroller and the WiFi module. Whether it's reading WiFi module status or transmitting commands to the module, the HAL GPIO library contributes to the establishment of wireless communication, a cornerstone of the project's remote control capability.

By adopting the HAL GPIO library, your project benefits from a streamlined approach to GPIO pin configuration, enabling cleaner and more maintainable code. The library abstracts away low-level register manipulation, enabling you to concentrate on higher-level logic and functionality. It simplifies the process of setting pins as inputs or outputs, reading and writing their states, and handling pull-up or pull-down resistors. This abstraction significantly reduces development time, enhances code readability, and promotes consistent and reliable interaction with external components.

### 3. Bolt IoT Cloud Platform:
The Bolt IoT Cloud Platform is a cloud-based service provided by Bolt IoT that allows you to manage and monitor your IoT devices, including the ESP8266 Bolt IoT module. It offers tools to visualize data, set up alerts, and control devices remotely through a user-friendly web-based interface.

## Contributors

[Suraj Sonawane](https://github.com/SurajSonawane2415)                                                                          
[Purva Yeshi](https://github.com/PurviSYeshi)  
