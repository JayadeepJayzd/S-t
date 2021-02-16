void setup() {
  
Serial.begin(9600);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

}

void loop() {
    
       Serial.begin(9600);
       if(digitalRead(3) == HIGH)
     {
        digitalWrite(9,HIGH);
         }
         else
         {
          
          digitalWrite(9,LOW);  
          delay(10);      
         }
  
       if(digitalRead(4) == HIGH)
        {       
         digitalWrite(10,HIGH);
         }
         else
         {
          digitalWrite(10,LOW);  
          delay(10);      
         }
   if(digitalRead(5) == HIGH)
         {    
             digitalWrite(11,HIGH);
         }
         else
         {
          digitalWrite(11,LOW);  
          delay(10);      
         }
  }

  
