//Channel A
#define IN1 6
#define IN2 7

//Channel B
#define IN3 8
#define IN4 9

//Enable Pins
#define ENA 3 //PWM
#define ENB 5 // PWM

//speed control
int speed = 9;

void setup() {

  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

}

void loop() {

  //Do this only if the application you are using outputs the speed value as a character
  if(Serial.available()) {
    char c = Serial.read();
    if(c >= '0' && c <= '9') {
      speed = c - '0'; //if c = 8 (ascii 38), c - '0' would be (38 - 30 = 8(int)) (30 ascii of 0)
    } else {
        switch(c) {
        case 'F': FORWARD(speed); break;
        case 'B': BACKWARD(speed); break;
        case 'R': RIGHT(speed); break;
        case 'L': LEFT(speed); break;
        case 'S': STOP(); break;
        default: STOP(); break;
      }
    }
  }

}

void BACKWARD(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  int mapping = map(speed, 0, 9, 0, 255);

  analogWrite(ENA, mapping);
  analogWrite(ENB, mapping);
}

void FORWARD(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  int mapping = map(speed, 0, 9, 0, 255);

  analogWrite(ENA, mapping);
  analogWrite(ENB, mapping);
}

void RIGHT(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  int mapping = map(speed, 0, 9, 0, 255);

  analogWrite(ENA, mapping);
  analogWrite(ENB, mapping);
}

void LEFT(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  int mapping = map(speed, 0, 9, 0, 255);

  analogWrite(ENA, mapping);
  analogWrite(ENB, mapping);
}

void STOP() {  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
