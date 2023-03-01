/*
 * author: Quentin Rauschenbach
 * 
 * email: quentin.g.j.r@gmail.com
 * 
 * UHH WiSe 2022/2023
 * Practical Measurement Electronics and Interfaces in ocean Sciences
 * 
 * Used Hardware:
 * - Arduino ???
 * - LED
 * - Resistor 270 Ohm
 * - Data-logger-shield
 * - Board
 * 
 * Let a LED blink in certain frequency
 */

#define red_LED 7
#define frequency 1000 // [ms]
float currentmillis = 0;
float lastmillis = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(red_LED, OUTPUT);
}

void loop()
{ currentmillis = millis();
 //Serial.println(currentmillis-lastmillis);
  if (currentmillis-lastmillis >= frequency){
    //Serial.println(millis());
    digitalWrite(red_LED, switchLED(red_LED));
    lastmillis = currentmillis;}
}

int switchLED(int pinNum){
  if (digitalRead(pinNum) == HIGH){return LOW;}
  else {return HIGH;}
}
