# ESP8266 P10 LED Panels

Welcome to the Scrolling Text LED Display project! This repository contains all the necessary code and documentation to create a dynamic scrolling text display using the ESP8266 and P10 LED panels. This project is perfect for anyone looking to create eye-catching signage for businesses, educational purposes, or personal use. The display can be customized to show any message, making it incredibly versatile for various applications.

Features
Dynamic Scrolling Text: Easily updateable text scrolls across P10 LED panels.
Configurable Display Setup: Support for multiple panels configured in a 2x1 setup.
Adjustable Brightness and Speed: Control the brightness of the LEDs and the speed of the scrolling text through the code.
Easy Customization: Change the displayed message by editing a simple array in the code.
Prerequisites
Before you get started with this project, make sure you have the following components:

ESP8266 module
One or more P10 LED panels arranged in a 2x1 format
Jumper wires and connectors
Appropriate power supply for the panels and ESP8266
Arduino IDE installed on your computer
Hardware Setup
LED Panels Configuration:

Connect your P10 LED panels in a 2 columns by 1 row configuration.
Ensure each panel is correctly daisy-chained for data signal and power.
Connect ESP8266 to LED Panels:

Connect the data input pins of the first P10 panel to the designated GPIO on the ESP8266.
Provide adequate power to both the ESP8266 and the LED panels using a stable power source.
Software Setup
Library Installation:

Open Arduino IDE and install the DMDESP library through the Library Manager.
Clone the Repository:

Open the downloaded sketch in Arduino IDE.
Modify the teks array within the code to display your desired message.
Adjust brightness and scrolling speed according to your preference.
Upload the Code:

Connect your ESP8266 via USB.
Select the correct board and port in the Arduino IDE.
Compile and upload the sketch to the ESP8266.
Usage
Once the code is uploaded and the hardware is set up:

Power on the system.
The text should start scrolling across the P10 LED panels.
Monitor and adjust settings like scroll speed and text content as needed.
Contributing
Feel free to fork this project and contribute by submitting pull requests. You can also open issues for bugs or feature requests. Contributions are what make the open-source community such an amazing place to learn, inspire, and create.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgements
DMDESP Library: For providing the essential functions to control P10 panels with the ESP8266.
Arduino Community: For support and resources that make projects like this possible.

 
<!--  -->