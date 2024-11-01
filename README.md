# Temperature and humidity reader by using arduino R3 and DHT11 

# Description:

This Arduino project provides a simple yet effective solution for monitoring real-time temperature and humidity levels using a DHT11 sensor. The collected data is displayed on a connected LCD screen, offering a clear and convenient way to keep track of environmental conditions.

**Key Features:**

* **DHT11 Sensor Integration:** Utilizes the versatile DHT11 sensor to accurately measure temperature and humidity values.
* **Arduino Microcontroller:** Leverages the powerful Arduino R3 microcontroller to process sensor data and control the LCD display.
* **LCD Display:** Presents the measured temperature and humidity readings in a user-friendly format on an attached LCD screen.
* **Flexibility:** Can be easily adapted to various applications, such as home automation, weather stations, or data logging systems.

**Getting Started:**

1. **Hardware Requirements:**
   * Arduino R3 board 
   * DHT11 temperature and humidity sensor
   * LCD display (16x2)
   * Potentiometer(10KΩ)
   * Jumper wires

2. **Software Requirements:**
   * Arduino IDE

3. **Project Setup:**
   * Connect the DHT11 sensor to the Arduino board according to the pinout diagram.
   * Connect the LCD display to the Arduino board using the appropriate pins.
   * Upload the provided Arduino code to the board.

4. **Circuit Diagram:**
   Here is the circuit digram for the project.
   
 ![Alt text](https://github.com/Prabrit/Temperature_Humidity_Reader-/blob/main/Circuit_Diagram.png)

  **Note:** Pins are connected in the diagram according to the code .   

# Disclaimer:
The c++ library use for DHT11 sensor is not prebuild in Arduino IDE. So you have to upload the zip file to run the code . Here is some guide which helps to upload the zip -

**Step 1:**
   * Download the DHT11 C++ library as zip file from https://github.com/dhrubasaha08/DHT11 .

**Step 2:**
   * Open Arduino IDE and go to Sketch option . Then click on include library .

     ![Alt text](https://github.com/Prabrit/Temperature_Humidity_Reader-/blob/main/libadd01.png)

**Step 3:**
   * In include library , there is a option Add .ZIP Library . Then upload DHT11 library zip file . It will take some time .

     
     ![Alt text](https://github.com/Prabrit/Temperature_Humidity_Reader-/blob/main/libadd02.png)

# Project Image:
Here is the image of the final project .


![Alt text](https://github.com/Prabrit/Temperature_Humidity_Reader-/blob/main/Hum_Temp.jpg)
      
     

