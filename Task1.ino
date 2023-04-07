/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int ledPin1 = 3;  // белая
const int ledPin2 = 5;  // синия
const int ledPin3 = 6;
const int ledPin4 = 9;
const int ledPin5 = 10;
const int ledPin6 = 11;

// Variables will change:
int ledState1 = LOW;  // ledState used to set the LED
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;
  // will store last time LED was updated

// constants won't change:
const long interval1 = 30;
const long interval2 = 400;
const long interval3 = 5000;
const long interval4 = 10000;
const long interval5 = 40000;
const long interval6 = 100000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMicros = micros();

  if (currentMicros - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState1);
  }

  if (currentMicros - previousMillis2 >= interval2) {
    // save the last time you blinked the LED
    previousMillis2 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin2, ledState2);
  }
  
    if (currentMicros - previousMillis3 >= interval3) {
    // save the last time you blinked the LED
    previousMillis3 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin3, ledState3);
  }

  if (currentMicros - previousMillis4 >= interval4) {
    // save the last time you blinked the LED
    previousMillis4 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin4, ledState4);
  }

  if (currentMicros - previousMillis5 >= interval5) {
    // save the last time you blinked the LED
    previousMillis5 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin5, ledState5);
  }

  if (currentMicros - previousMillis6 >= interval6) {
    // save the last time you blinked the LED
    previousMillis6 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin6, ledState6);
  }
}
