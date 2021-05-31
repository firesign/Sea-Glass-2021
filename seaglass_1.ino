// Seaglass project with Dorothea
// v. 1.0
// May 1, 2021


int ledPin = 5;    // LED connected to digital pin 3 (PWM)
int potPin = 1;   // Potentiometer on A1
int lightLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {

  lightLevel = analogRead(potPin);  // read light sensor
  int x = map(lightLevel, 0, 1023, 0, 255);
    analogWrite(ledPin, x);
    
}
