# M5Stack-HC-SR04

This sketch works with the M5Stack basic model and the HC-SR04 ultrasonic distance sensor.
The distance sensor is connected to the M5Stack bsic unit using the jumper cables.
The HC-SR04 emits an ultrasonic signal and recieves the reflected signal.
The output of the sensor is the ToF (Time of Flight) of the signal in microseconds.
This is the time that the signal took to reach the obstacle and then bounce back at the sensor. 
Therefore, to calculate the distance to a certain obstacle, half of the ToF has to be taken into consideration for calculation of distance.
The distance is displayed in centimeters on the LCD display of the M5Stack.

The pin arrangement between the sensor and the M5Stack is as follows.

| HC-SR04 | M5Stack |
| :---: | :---: |
| Echo  | 5 |
| Trig  | 2 |
| Gnd | G |
| Vcc  | 5V |
