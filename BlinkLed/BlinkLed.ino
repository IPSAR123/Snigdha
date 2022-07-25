 
 #define led1 8

void setup() {
  
  // put your setup code here, to run once:
   pinMode(led1,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(led1,HIGH);
    delay(5000);
   digitalWrite(led1,LOW);
   delay(3500);
   
}
