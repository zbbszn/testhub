int ledPin = 13;
int ledPin2 = 14;
int buttonPin1 = 33;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin1) == HIGH){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    delay(500);
  }
}
