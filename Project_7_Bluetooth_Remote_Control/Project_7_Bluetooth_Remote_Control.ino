/*
 keyestudio 4wd BT Car V2.0
 lesson 7.1
 bluetooth 
http://www.keyestudio.com
*/

char ble_val; //character variable, used to save the value received by Bluetooth 

void setup() {
  Serial.begin(9600);
}
void loop() {
  if(Serial.available() > 0)  //make sure if there is data in serial buffer

  {
    ble_val = Serial.read();  //Read data from serial buffer
    Serial.println(ble_val);  //Print
  }}
//**********************************************************************
