# Dancing LED Project for PIC18F46K20

Welcome to the Dancing LED project! This project demonstrates a fun LED animation using the Microchip PIC18F46K20 microcontroller. Below, you'll find information on the purpose of the project, setup instructions, required tools, and other important details.

## Table of Contents

- [Project Overview](#Project-Overview)
- [Requirements](#Requirements)
- [Setup Instructions](#Steup-Instructions)
- [Circuit Schematic Diagram](#Circuit-Schematic-Diagram)
- [Code Structure](#Code-Structure)
- [Usage](#Usage)
- [Contributing](#Contributing)
- [License](#License)

## Project Overview
The Dancing LED project showcases a simple LED pattern or animation using the PIC18F46K20. It can be used to demonstrate basic microcontroller programming concepts, such as GPIO control, timing, and loops. This project is ideal for beginners or those looking to learn about embedded systems and microcontroller programming.

## Requirements
To work on this project, you will need the following:

* Development Environment: MPLAB X IDE and XC8 compiler.
* Microcontroller: PIC18F46K20.
* Programmer/Debugger: PICkit 3 or PICkit 4 (optional, for real hardware testing).
* Proteus: For simulation and testing.
* Basic Electronic Components: LEDs, resistors, breadboard, and wires (for real hardware setup).

## Setup Instructions
### For Real Hardware:
* Install MPLAB X IDE and XC8 compiler.
* Open the project in MPLAB X IDE.
* Connect your PICkit programmer to the PIC18F46K20 microcontroller.
* Connect the LEDs and resistors to the microcontroller based on the schematic provided in the project.
* Program the microcontroller with the compiled code.

### For Proteus Simulation:
* Open Proteus and import the provided project file.
* Set up the virtual components (PIC18F46K20, LEDs, resistors, etc.) based on the schematic.
* Compile the code in MPLAB X IDE and upload it to Proteus.
* Simulate the project to see the LED pattern.

## Circuit Schematic Diagram
![Schematic](https://i.imgur.com/tUnGMLH.jpeg)
<p>Fig: Schematic Circuit Diagram</p>

## Code Structure
The code for this project is organized as follows:

* Main Code: Contains the main logic for controlling the LEDs.
* ECU_Layer: The ECU Layer represents a segment of a system architecture designed to interact with and manage Electronic Control Units (ECUs). ECUs are microcontroller-based units responsible for controlling specific functions within a vehicle or other complex systems. This layer serves as an interface between software applications and the hardware components in the system.
* MCAL_Layer: The Microcontroller Abstraction Layer (MCAL) is a key component in embedded software architecture, particularly in the context of AUTOSAR. The MCAL abstracts the hardware layer, providing a consistent interface for higher-level software components to interact with microcontroller peripherals and other hardware components. By isolating hardware-specific details, the MCAL promotes portability and reusability of software across different hardware platforms.
* GPIO Layer: The General Purpose Input/Output (GPIO) Layer is a critical part of embedded systems and hardware abstraction. It provides a standardized way to configure and control GPIO pins on a microcontroller. This layer is responsible for managing the configuration, state, and behavior of these pins, enabling a variety of applications from simple LED blinking to complex control systems. 

## Usage
After setting up the project and uploading the code, you can see the LED animation in action. If using real hardware, ensure proper connections and power supply. If using Proteus, ensure the simulation runs without errors.

## Contributing
Contributions are welcome! If you would like to contribute to this project, please follow these steps:

Fork the repository.
Create a new branch for your changes.
Make your modifications and test them.
Submit a pull request with a description of the changes.

## License
This project is licensed under the MIT License. Please review the license for more details on permitted use and distribution.

Contact
