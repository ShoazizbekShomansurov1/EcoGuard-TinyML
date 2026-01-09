int left1 = 2;
int left2 = 3;
int right1 = 4;
int right2 = 5;
int trigPin = 6;
int echoPin = 7;
int temp = A0;

void setup(){
  pinMode (left1,OUTPUT);
  pinMode (left2,OUTPUT);
  pinMode (right1,OUTPUT);
  pinMode (right2,OUTPUT);
  pinMode (trigPin,OUTPUT);
  pinMode (echoPin,INPUT);
  pinMode (temp,INPUT);
  Serial.begin(9600);
}

void loop(){
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
  int sensorValue = analogRead(A0);
  float temperature = sensorValue * (5.0 / 1023.0) * 100;
  Serial.print("Температура: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
  digitalWrite(left1, HIGH);
  digitalWrite(left2, LOW);
  digitalWrite(right1, HIGH);
  digitalWrite(right2, LOW);
  delay(3000); 
  digitalWrite(left1, LOW);
  digitalWrite(left2, HIGH); 
  digitalWrite(right1, LOW);
  digitalWrite(right2, HIGH);
  delay(3000);   
}


void stopMotors() {
  digitalWrite(left1, LOW);
  digitalWrite(left2, LOW);
  digitalWrite(right1, LOW);
  digitalWrite(right2, LOW);
  delay(1000);
}
