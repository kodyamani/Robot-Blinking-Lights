int redLED = 3;

void setup() {
pinMode(redLED,OUTPUT);

}

void loop() {
  
//H
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);

//I
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);

//Space between two words
delay(7000);


//W
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(3000);

//O
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(3000);

//R
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);

//L
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);

//D
digitalWrite(redLED,HIGH);
delay(3000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(1000);
digitalWrite(redLED,HIGH);
delay(1000);
digitalWrite(redLED,LOW);
delay(10000); //This is to end the sentence

}
