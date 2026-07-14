# water-level-monitoring-system
An embedded system developed as part of the **Embedded Systems Architecture (CSEN701)** course at the **German University in Cairo (GUC)**.

The project aims to monitor and control a water management system by measuring water level and temperature, automatically controlling a water pump and cooling fan, and providing emergency alerts when abnormal conditions are detected.

## Project Description

The system monitors a water source and controls the transfer of water between two tanks using multiple sensors and actuators.

The system is capable of:
- Monitoring water level using water level and ultrasonic sensors
- Measuring water temperature
- Automatically controlling a water pump
- Adjusting fan speed based on temperature
- Detecting emergency overflow conditions
- Alerting users using a buzzer

The system is implemented using an **Arduino Nano RP2040 Connect** and uses **FreeRTOS** to handle concurrent sensor and actuator tasks.

## Features

### Water Level Monitoring
- Measures water level using a water level sensor
- Classifies water level into:
  - Low
  - Medium
  - High
- Automatically activates the water pump when the level is low or medium
- Stops pumping when the tank reaches a high level

### Temperature Monitoring and Cooling
- Measures water temperature using a DS18B20 temperature sensor
- Controls fan speed according to temperature:
  - Below 20°C: Fan OFF
  - 20°C - 50°C: Fan operates at 50% speed
  - Above 50°C: Fan operates at 100% speed

### Emergency Overflow Detection
- Uses an ultrasonic sensor for additional water level monitoring
- Detects critical water levels
- Switches the pump direction to remove excess water
- Activates a buzzer alert during emergency states

### Concurrent Task Management
The system uses FreeRTOS to run multiple tasks concurrently:

- Water level monitoring and pump control
- Temperature monitoring and fan control
- Ultrasonic monitoring and emergency buzzer control

## Hardware Components

| Component | Purpose |
|---|---|
| Arduino Nano RP2040 Connect | Main microcontroller |
| Water Level Sensor | Measures water level |
| DS18B20 Temperature Sensor | Measures water temperature |
| HC-SR04 Ultrasonic Sensor | Emergency water level detection |
| Water Pump | Transfers water between tanks |
| 2-Wire Fan | Cooling system |
| Buzzer | Emergency alert |
| L298 H-Bridge | Motor and actuator control |
| 4.7k Resistor | Sensor circuit support |
| Breadboard | Circuit prototyping |
| Jumper Wires | Connections |

## Software and Technologies

- Embedded C/C++
- Arduino SDK
- FreeRTOS
- Sensor and actuator drivers
- Serial monitoring

## System Architecture

The system consists of three main concurrent subsystems:

1. Water Level Subsystem
   - Water level sensor
   - Water pump
   - Pump control logic

2. Temperature Control Subsystem
   - Temperature sensor
   - Cooling fan
   - PWM-based fan speed control

3. Emergency Detection Subsystem
   - Ultrasonic sensor
   - Buzzer
   - Emergency pump control

## Team Members

- Malak Ragaie
- Youssef Eloraby
- Seif Selim
- Halla Tarek
