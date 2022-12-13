# Ultrassonic Sensor HC-SR04

An example code for reading data from the ultrasonic sensor HC-SR04 with arduino


Assuming sound travels at approximately 340m/s, converting to centimeters per microsecond (Ultrasonic Sensor Data Return Unit).

**We have:**

    340 m/s = 34000 cm / 10^⁻6s = 0.034 cm/𝜇s.


In a microsecond, sound travels 0.034 centimeters.

**Then, to travel 1 centimeter:**

    1𝜇s / 0.034 cm = 29.4117647059 𝜇s/cm

The sensor picks up the reflection of the pulse, this being the travel time added to the pulse return time.

**Then:**

    reflectionTime = 2 x pulseTimeCm
    reflectionTime = 2 x 29.4117647059 = 58.823529412 𝜇s
## Licença

[MIT](https://choosealicense.com/licenses/mit/)

