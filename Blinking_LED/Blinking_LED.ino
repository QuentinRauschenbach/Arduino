// C++ code
//



#define red_LED 7
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
  if (currentmillis-lastmillis >= 1000){
    //Serial.println(millis());
    digitalWrite(red_LED, switchLED(red_LED));
    lastmillis = currentmillis;}
}

int switchLED(int pinNum){
  if (digitalRead(pinNum) == HIGH){return LOW;}
  else {return HIGH;}
}
