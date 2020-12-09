const int pin0 = 3;
const int pin1 = 5;
const int pin2 = 6;
const int pin3 = 9;
const int pin4 = 10;
const int pin5 = 11;


void setup() {
Serial.begin(9600);
pinMode(pin0,INPUT_PULLUP);
pinMode(pin1,INPUT_PULLUP);
pinMode(pin2,INPUT_PULLUP);
pinMode(pin3,INPUT_PULLUP);
pinMode(pin4,INPUT_PULLUP);
pinMode(pin5,INPUT_PULLUP);
}

void loop() {
  int sensor0 = digitalRead(pin0);
  Serial.print(sensor0);
  Serial.print(",");
  delay(1);

  int sensor1 = digitalRead(pin1);
  Serial.print(sensor1);
  Serial.print(",");
  delay(1);

  int sensor2 = digitalRead(pin2);
  Serial.print(sensor2);
  Serial.print(",");
  delay(1);

  int sensor3 = digitalRead(pin3);
  Serial.print(sensor3);
  Serial.print(",");
  delay(1);

  int sensor4 = digitalRead(pin4);
  Serial.print(sensor4);
  Serial.print(",");
  delay(1);
  
  int sensor5 = digitalRead(pin5);
  Serial.println(sensor5);
  
}
