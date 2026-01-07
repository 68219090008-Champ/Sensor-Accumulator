//LAB 6.2
//https://app.cirkitdesigner.com/project/2111ce17-a403-41b9-be2d-4f54ae95af0a

#define MotorL 2
#define MotorR 3

#define MotorL1 4
#define MotorR1 5

#define ENB 7
#define ENA 8

void setup() {
  pinMode(MotorL, OUTPUT);
  pinMode(MotorR, OUTPUT);
  pinMode(MotorL1, OUTPUT);
  pinMode(MotorR1, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(ENA, OUTPUT);

}

void loop() {
  digitalWrite(ENB, HIGH);   // หมุนไปข้างหน้า
  digitalWrite(ENA, HIGH);
  digitalWrite(MotorL, LOW);  
  digitalWrite(MotorR, HIGH);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorR1, HIGH);
  delay(2000);

  digitalWrite(ENB, HIGH);    // หยุดนิ่ง
  digitalWrite(ENA, HIGH);
  digitalWrite(MotorL, LOW);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, LOW);   
  digitalWrite(MotorR1, LOW);
  delay(2000);
  
  digitalWrite(ENB, HIGH);   // หมุนกลับหลัง
  digitalWrite(ENA, HIGH);
  digitalWrite(MotorL, HIGH);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, HIGH);   
  digitalWrite(MotorR1, LOW);
  delay(2000);

  digitalWrite(ENB, HIGH);    // หยุดนิ่ง
  digitalWrite(ENA, HIGH);
  digitalWrite(MotorL, LOW);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, LOW);   
  digitalWrite(MotorR1, LOW);
  delay(2000);

}
