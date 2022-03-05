int redled=13;
int greenled=12;
int yellowled=11;
int ontime=1000;
int offtime=2000;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(yellowled,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);
  digitalWrite(redled,HIGH);
  delay(ontime);
  digitalWrite(redled,LOW);
  delay(offtime);


  //////////////////////////////green led///////////////////////////////
  digitalWrite(greenled,HIGH);
  delay(ontime);
  digitalWrite(greenled,LOW);
  delay(offtime);
  digitalWrite(greenled,HIGH);
  delay(ontime);
  digitalWrite(greenled,LOW);
  delay(offtime);
/////////////////yellow led//////////////////////////

  digitalWrite(yellowled,HIGH);
  delay(ontime);
  digitalWrite(yellowled,LOW);
  delay(offtime);
}
