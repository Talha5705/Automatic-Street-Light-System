int pin=A0;
int led=3;
int lm=0;
void setup() {
pinMode(pin,INPUT);
pinMode(pin,OUTPUT);  
Serial.begin(9600);
}

void loop() {
  lm=analogRead(pin);
  Serial.println(lm);
  delay(200);

  if(lm<80){
    
    digitalWrite(led,HIGH);
    }
    else{digitalWrite(led,LOW);}

}
