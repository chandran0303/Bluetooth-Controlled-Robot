# Bluetooth Controlled Bot (Using Adafruit L293D Motor Driver)

A robot which is controlled by an HC-05 module and receives commands using a Bluetooth terminal app.


# Story

The idea was to make an extremely simple Bluetooth-controlled robot. It was done with an effort to understand the working of the Bluetooth module (HC-05) and how to use it. It can move forward, backward, left, right and stop by giving letter inputs of 'f', 'b', 'l', 'r' and 's' respectively.

Note: This model uses Adafruit L293D motor shield. This requires you to download and use a particular library for the same. You can use a generic motor shield as well but the code will change.

# Components

 - Arduino Uno
 - Jumper wires
 - DC Motors
 - L293D Motor Driver
 - Chassis for the robot
 - 9V batteries
 - Bluetooth Module HC-05

# Instructions

 1. Assemble the robot and ensure all connections are made with respect to the constants defined in the code.
 2. Upload the code on Arduino Uno
 3. Connect the battery and place the robot on the ground
 4. Download a bluetooth control app for Arduino on App Store or PlayStore.
 5. Connect with the Bluetooth module
 6. Enter the corresponding letters - f,b,l,r,s to move front, back, left, right and stop.
