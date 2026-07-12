const int trigPin = 10;
const int echoPin = 9;
const int buzzer = 8;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Convert time to distance
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 50) {
    noTone(buzzer);                 // Silent
  }
  else if (distance > 20) {
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  else if (distance > 10) {
    tone(buzzer, 1000);
    delay(200);
    noTone(buzzer);
    delay(200);
  }
  else {
    tone(buzzer, 1000);             // Continuous beep
  }
}
