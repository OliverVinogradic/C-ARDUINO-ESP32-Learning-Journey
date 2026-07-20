void setup() {
 
 pinMode(12,OUTPUT);
 pinMode(2,INPUT);

}
//digitalWrite is for giving out Power,digitalRead is for checking Power
void loop() {

  if(digitalRead(2) == HIGH){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }



}
