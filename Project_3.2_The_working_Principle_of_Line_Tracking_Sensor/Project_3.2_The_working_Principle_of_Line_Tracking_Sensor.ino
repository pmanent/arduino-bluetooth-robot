/*
keyestudio 4wd BT Car V2
lesson 3.2
 Line Track sensor
 http://www.keyestudio.com
*/
int L_pin = 11;  //pins of  left line tracking sensor
int M_pin = 7;  //pins of  middle line tracking sensor
int R_pin = 8;  //pins of  right  line tracking sensor
int val_L,val_R,val_M;// define the variables of three sensors 
void setup()
{
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(L_pin,INPUT); // make the L_pin as an input
  pinMode(M_pin,INPUT); // make the M_pin as an input
  pinMode(R_pin,INPUT); // make the R_pin as an input
  pinMode(9, OUTPUT);
}
void loop() 
{ 
  val_L = digitalRead(L_pin);//read the L_pin:
  val_R = digitalRead(R_pin);//read the R_pin:
  val_M = digitalRead(M_pin);//read the M_pin:
  Serial.print("left:");
  Serial.print(val_L);
  Serial.print(" middle:");
  Serial.print(val_M);
  Serial.print(" right:");
  Serial.println(val_R);
  

  if (val_L == HIGH)//if left line tracking sensor detects signals
  { 
    digitalWrite(9, LOW);//LED is off
  } 
  else//if left line tracking sensor doesn’t detect signals
  { 
    digitalWrite(9, HIGH);//LED lights up
    delay(30); 
  }
   
  if (val_R == HIGH)//if right line tracking sensor detects signals
  {
    digitalWrite(9, LOW);//LED is off
  }
  else//if right line tracking sensor doesn’t detect signals
  {
    digitalWrite(9, HIGH);//LED lights up
    delay(30); 
  }
    
  if (val_M == HIGH)//if middle line tracking sensor detects signals
  {
    digitalWrite(9, LOW);//LED is off
  }
  else//if middle line tracking sensor doesn’t detect signals
  {
    digitalWrite(9, HIGH);//LED lights up
    delay(30); 
  }
}
//****************************************************************************
