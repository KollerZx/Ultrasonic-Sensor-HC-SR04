/* 
  Connecting Ultrasonic Sensor HC-SR04 with Arduino
  Autor: Henrique Koller
  Date: 13/12/2022
  Version: 1.0.0
 */


#define trigger 4
#define echo 5

float dist_cm;
const float _cmDivisor = 58.823529412; // Reflection Time from the sensor for a 1cm

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trigger, LOW); //Trigger inicia em LOW
  Serial.begin(9600);
  Serial.println("Sensor reading...");
}

void loop() {
 dist_cm = measureDistance();
 Serial.print(dist_cm);
 Serial.println("cm");
 delay(1000);
}

unsigned long ping() {
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  return pulseIn(echo, HIGH);
}

float measureDistance(){
  float pulse;
  float dist;
  pulse = ping();
  dist = pulse / _cmDivisor;

  return dist;
}
