byte A=2, B=3, C=4, D=5;
int stepNumber = 512;
int counter = 0;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}

void loop() {
  while(counter < stepNumber)
  {
    motor_movements(1,0,0,0);
    motor_movements(1,1,0,0);
    motor_movements(0,1,0,0);
    motor_movements(0,1,1,0); 
    motor_movements(0,0,1,0); 
    motor_movements(0,0,1,1);
    motor_movements(0,0,0,1);
    motor_movements(1,0,0,1); 
 
    counter++;
  }
}

void motor_movements(byte x1, byte x2, byte x3, byte x4){
  digitalWrite(A, x1);
  digitalWrite(B, x2);
  digitalWrite(C, x3);
  digitalWrite(D, x4);
  delay(10);
}
