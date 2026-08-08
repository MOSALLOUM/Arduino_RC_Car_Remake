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
int speed = 0

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
  
  if(Serial.available()) {
    char c = Serial.read();
    
    switch(c) {
      case 'F': FORWARD(); break;
      case 'B': BACKWARD(); break;
      case 'R': RIGHT(); break;
      case 'L': LEFT(); break;
      case 'S': STOP(); break;
      default: STOP(); break;
    }
  }

}

void BACKWARD() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void FORWARD() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void RIGHT() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void LEFT() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void STOP() {  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
