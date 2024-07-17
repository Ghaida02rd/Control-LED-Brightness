int ledPin=3; //output
int  readPin= A2; //input
int readValue;
void setup() {

pinMode(ledPin, OUTPUT); 
pinMode(readPin, INPUT);

}

void loop() {
 readValue = analogRead(readPin);
 analogWrite(ledPin,readValue*255 /1023);
}
