#include <SoftwareSerial.h>
SoftwareSerial Serial1(12,13);


void sendMessage()
{
  Serial1.println("AT+CMGF=1");
  delay(1000);
  Serial1.println("AT+CMGS=\"+918903024290\"\r");
  delay(1000);
  Serial1.println((char)26);
  delay(1000);
  }
  void setup()
  {
    
    Serial1.begin(9600);
     delay(1000);
    Serial.begin(9600);
    
    delay(100);
    pinMode(13,OUTPUT);
    pinMode(12,INPUT);
  }

  void loop()
  {
    Serial1.println("AT+CMGF=1");
  delay(1000);
  Serial1.println("AT+CMGS=\"+918903024290\"\r");
  delay(1000);
  Serial1.println("Test Messaging");
   Serial.println("Test Messaging");
  Serial1.println((char)26);
  delay(1000);
    
  }
