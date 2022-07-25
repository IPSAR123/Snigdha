int i= 1 ; 
int ledpin = 8;              
void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  }
  void loop() {
  count();
  }
    void count(){
    for(i=1;i<=10;i++){
    Serial.print("Count=");
    Serial.println(i);
    }
    digitalWrite(ledpin,HIGH);
      Serial.println("LED ON");
      delay(1000);
      digitalWrite(ledpin,LOW);
      Serial.println("LED OFF");
      delay(1000);
    }
