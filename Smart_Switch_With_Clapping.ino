int SoundSensor=2; // LM393 Sound Sensor Digital Pin D0 connected to pin 2  
 int LED=9;     // LED connected to pin 9  
 int RELAY=10;   // RELAY connected to pin 10  
 boolean LEDStatus=false;  
 void setup()  
 {  
  pinMode(SoundSensor,INPUT);  
  pinMode(LED,OUTPUT);   
  pinMode(RELAY,OUTPUT);  
  Serial.begin(9600); //initialize serial  
  digitalWrite(RELAY,HIGH); // RELAY High means OFF   
 }  
 void loop()   
 {  
  int SensorData=digitalRead(SoundSensor);   
  Serial.println(SensorData);//print the value  
   if(SensorData==1)  
   {  
   if(LEDStatus==false)  
   {  
     LEDStatus=true;  
     digitalWrite(LED,HIGH);  // LED ON  
     digitalWrite(RELAY,LOW); // RELAY OFF  
   }  
   else if(LEDStatus==true)  
   {  
     LEDStatus=false;  
     digitalWrite(LED,LOW);  // LED ON  
     digitalWrite(RELAY,HIGH); // RELAY OFF  
   }  
   }  
   }  
