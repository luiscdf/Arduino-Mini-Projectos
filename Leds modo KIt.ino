
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;



void setup() {                
 
  // atrubui aos leds 2-11 como output
    
    pinMode(led2, OUTPUT);      
    pinMode(led3, OUTPUT);    
    pinMode(led4, OUTPUT);    
    pinMode(led5, OUTPUT);    
    pinMode(led6, OUTPUT);    
    pinMode(led7, OUTPUT);    
    pinMode(led8, OUTPUT);    
    pinMode(led9, OUTPUT);    
    pinMode(led10, OUTPUT);      
    pinMode(led11, OUTPUT);                              
}


void loop() {
  
  //inicia o piscar dos leds em sequencia

  digitalWrite(led2, HIGH);   
  delay(100);               
  digitalWrite(led2, LOW);  
   
   
  digitalWrite(led3, HIGH);   
  delay(100);               
  digitalWrite(led3, LOW);  
   
  
  digitalWrite(led4, HIGH);   
  delay(100);               
  digitalWrite(led4, LOW);  
     
  
  digitalWrite(led5, HIGH);   
  delay(100);               
  digitalWrite(led5, LOW);
     
   
  digitalWrite(led6, HIGH);   
  delay(100);               
  digitalWrite(led6, LOW);
     
   
  digitalWrite(led7, HIGH);   
  delay(100);               
  digitalWrite(led7, LOW);
     
   
  digitalWrite(led8, HIGH);   
  delay(100);               
  digitalWrite(led8, LOW);   
      

  digitalWrite(led9, HIGH);  
  delay(100);               
  digitalWrite(led9, LOW);   
     
  
  digitalWrite(led10, HIGH);  
  delay(100);               
  digitalWrite(led10, LOW);   
     
 
  digitalWrite(led11, HIGH);  
  delay(100);               
  digitalWrite(led11, LOW);   
     
 // reverte o processo.  
  
  
  digitalWrite(led11, HIGH);  
  delay(100);               
  digitalWrite(led11, LOW);   
     
  digitalWrite(led10, HIGH);  
  delay(100);               
  digitalWrite(led10, LOW);   
     
  digitalWrite(led9, HIGH);  
  delay(100);               
  digitalWrite(led9, LOW);   
     
  digitalWrite(led8, HIGH);   
  delay(100);               
  digitalWrite(led8, LOW);   
      
  digitalWrite(led7, HIGH);   
  delay(100);               
  digitalWrite(led7, LOW);
     
   
  digitalWrite(led6, HIGH);   
  delay(100);               
  digitalWrite(led6, LOW);
     
  digitalWrite(led5, HIGH);   
  delay(100);               
  digitalWrite(led5, LOW);
     
  digitalWrite(led4, HIGH);   
  delay(100);               
  digitalWrite(led4, LOW);  
     
  
  digitalWrite(led3, HIGH);   
  delay(100);               
  digitalWrite(led3, LOW);  
   
  
  digitalWrite(led2, HIGH);   
  delay(100);               
  digitalWrite(led2, LOW);  
 
 
}
