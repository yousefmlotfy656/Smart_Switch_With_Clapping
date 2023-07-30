Clap Switch Using Arduino and KY-038 Sound Sensor
In this project, we will learn how to create a Clap Switch using an Arduino and a KY-038 Sound Sensor. The Clap Switch is a digital switch that turns on and off automatically when it detects a clap sound. We will be using an Arduino UNO microcontroller board to control the circuit and a KY-038 sound sensor to detect the clap sound.

How Does it Work?
The KY-038 sound sensor generates a high output whenever it detects a sound signal. When you clap near the sound sensor, it detects the sound, and the LED connected to the Arduino board will turn on. Clap again, and the LED will turn off. There are two circuits provided in this project—one for controlling an AC bulb and the other for an LED. Please be cautious when working with the AC load.

Components Required
To build the Clap Switch, you'll need the following components:

Arduino UNO
USB cable for uploading the code
KY-038 sound sensor
Red LED
220-ohm resistor
Single-channel relay module
AC bulb
Jumper wires


Connect the 5V and GND pins of the Arduino to the VCC and GND pins of the sound sensor.
Attach the A0 pin of the sound sensor to the analog-0 pin of the Arduino, and the D0 pin to the digital-2 pin of the Arduino.
Join the positive wire of the LED to the digital-9 pin of the Arduino, and the negative wire of the LED to the GND pin of the Arduino via a 220-ohm resistor.
Connect the 5V and GND pins of the Arduino to the VCC and GND pins of the relay module.
Connect the data pin of the relay module to the digital-10 pin of the Arduino.
On the opposite side of the relay module, connect one wire from the domestic AC supply.
Attach another wire from the bulb to the other pin of the relay module.
Join the other wire from the AC supply to the bulb.
Please refer to the provided circuit diagram for a visual representation of the connections.

Uploading the Arduino Code
Once the circuit is ready, upload the given Arduino code to the Arduino board. The code will enable the Clap Switch functionality, allowing the LED to turn on and off based on the detected clap sound.

Please exercise caution when working with electrical components and AC loads. Ensure that the connections are secure and accurate before powering up the circuit.
