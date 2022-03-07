#include <M5Stack.h>

#define TRIG 2
#define ECHO 5

int times;
float distance;

void setup() {
  M5.begin();

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  // Letter size
  M5.Lcd.setTextSize(4);
}

void loop() {
  // Make the LCD background white
  M5.Lcd.fillScreen(BLACK);

  // Ultrasonic sound generation
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Receive ultrasonic sound
  times = pulseIn(ECHO, HIGH);
  distance = (times * 0.017); //(340m/s)*(10**(-4))/2   <----- Take half the ToF, multiply it with the velocity of sound and convert to meter from micro meter

  // Display on the LCD screen
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.print(distance);
  M5.Lcd.print(" cm");
  delay(500);
}
