/* keyestudio 4wd BT Car V2
lesson 6.2
IRremote
http://www.keyestudio.com
*/ 
#include <IRremote.h>
int RECV_PIN = 3;//define the pin of IR receiver as A0
int LED_PIN=9;// define the pin of LED as pin 3
int a=0;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{Serial.begin(9600);
  irrecv.enableIRIn(); //  Initialize the IR receiver 
  pinMode(LED_PIN,OUTPUT);//set pin 3 of LED to OUTPUT
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
if(results.value==0xFF02FD &a==0) //according to the above key value, press“OK”on remote control , LED will be controlled
{digitalWrite(LED_PIN,HIGH);//LED will be on
a=1;
}
else if(results.value==0xFF02FD &a==1) //press again
{
digitalWrite(LED_PIN,LOW);//LED will go off
a=0;
}
    irrecv.resume(); // receive the next value
  }}//*******************************************************
