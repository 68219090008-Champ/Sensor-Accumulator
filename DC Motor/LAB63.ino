//LAB 6.3 
//https://app.cirkitdesigner.com/project/7cebce5a-dfee-41e0-9417-53eb644ac24f

#define MotorL 2
#define MotorR 3

#define MotorL1 4
#define MotorR1 5

#define ENB 6
#define ENA 9

void setup() {
  pinMode(MotorL, OUTPUT);
  pinMode(MotorR, OUTPUT);
  pinMode(MotorL1, OUTPUT);
  pinMode(MotorR1, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(ENA, OUTPUT);

}

void loop() {
  analogWrite(ENB, 255);   // หมุนไปข้างหน้า
  analogWrite(ENA, 255);
  digitalWrite(MotorL, LOW);  
  digitalWrite(MotorR, HIGH);
  digitalWrite(MotorL1, LOW);
  digitalWrite(MotorR1, HIGH);
  delay(5000);

  analogWrite(ENB, 0);   // หยุดนิ่ง
  analogWrite(ENA, 0);
  digitalWrite(MotorL, LOW);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, LOW);   
  digitalWrite(MotorR1, LOW);
  delay(2000);

  analogWrite(ENB, 255);   // หมุนกลับหลัง
  analogWrite(ENA, 255);
  digitalWrite(MotorL, HIGH);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, HIGH);   
  digitalWrite(MotorR1, LOW);
  delay(2000);

  analogWrite(ENB, 0);   // หยุดนิ่ง
  analogWrite(ENA, 0);
  digitalWrite(MotorL, LOW);   
  digitalWrite(MotorR, LOW);
  digitalWrite(MotorL1, LOW);   
  digitalWrite(MotorR1, LOW);
  delay(2000);

}
