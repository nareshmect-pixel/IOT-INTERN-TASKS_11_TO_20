const int potPin = A0;
const int ledPin = 9;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(potPin);

  int brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

  Serial.print("Brightness: ");
  Serial.println(brightness);

  delay(100);
}