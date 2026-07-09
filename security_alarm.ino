// Smart Security Alarm System
// Arduino + LDR + Laser + LED + Buzzer

const int ldrPin = A0;
const int ledPin = 8;
const int buzzerPin = 9;
const int laserPin = 7;

int ldrValue = 0;
int threshold = 500;   // Adjust after testing

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(laserPin, OUTPUT);

  // Turn laser ON
  digitalWrite(laserPin, HIGH);

  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.begin(9600);

  Serial.println("SMART SECURITY ALARM STARTED");
}

void loop()
{
  ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value = ");
  Serial.println(ldrValue);

  // Use this because your circuit worked with reversed logic
  if (ldrValue < threshold)
  {
    Serial.println("INTRUDER DETECTED!");

    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  }
  else
  {
    Serial.println("System Secure");

    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(100);
}