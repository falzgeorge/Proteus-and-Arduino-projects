const int gR1 = 1, yR1 = 2, rR1 = 3;
const int gR2 = 4, yR2 = 5, rR2 = 6;
const int gR3 = 7, yR3 = 8, rR3 = 9;
const int gR4 = 10, yR4 = 11, rR4 = 12;

void setup() {
  pinMode(gR1, OUTPUT);
  pinMode(yR1, OUTPUT);
  pinMode(rR1, OUTPUT);
  pinMode(gR2, OUTPUT);
  pinMode(yR2, OUTPUT);
  pinMode(rR2, OUTPUT);
  pinMode(gR3, OUTPUT);
  pinMode(yR3, OUTPUT);
  pinMode(rR3, OUTPUT);
  pinMode(gR4, OUTPUT);
  pinMode(yR4, OUTPUT);
  pinMode(rR4, OUTPUT);
}

void loop() {
  s1();
  delay(500);
  s2();
  delay(250);
  s3();
  delay(500);
  s4();
  delay(250);
  s5();
  delay(500);
  s6();
  delay(250);
  s7();
  delay(500);
  s8();
  delay(250);
}

void s1() {
  digitalWrite(gR1, HIGH);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, LOW);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s2() {
  digitalWrite(gR1, HIGH);
  digitalWrite(yR1, HIGH);
  digitalWrite(rR1, LOW);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, HIGH);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s3() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, HIGH);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, LOW);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s4() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, HIGH);
  digitalWrite(yR2, HIGH);
  digitalWrite(rR2, LOW);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s5() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, HIGH);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, LOW);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s6() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, HIGH);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, HIGH);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, LOW);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s7() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, HIGH);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, LOW);
}

void s8() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, HIGH);
  digitalWrite(rR4, LOW);
}

void s9() {
  digitalWrite(gR1, HIGH);
  digitalWrite(yR1, LOW);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, HIGH);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, LOW);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, HIGH);
  digitalWrite(rR4, LOW);
}

void s10() {
  digitalWrite(gR1, HIGH);
  digitalWrite(yR1, HIGH);
  digitalWrite(rR1, HIGH);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, LOW);

  digitalWrite(gR3, LOW);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, LOW);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, LOW);
}

void s11() {
  digitalWrite(gR1, LOW);
  digitalWrite(yR1, HIGH);
  digitalWrite(rR1, LOW);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, HIGH);
  digitalWrite(rR2, LOW);

  digitalWrite(gR3, HIGH);
  digitalWrite(yR3, LOW);
  digitalWrite(rR3, HIGH);

  digitalWrite(gR4, HIGH);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}

void s12() {
  digitalWrite(gR1, HIGH);
  digitalWrite(yR1, HIGH);
  digitalWrite(rR1, LOW);

  digitalWrite(gR2, LOW);
  digitalWrite(yR2, LOW);
  digitalWrite(rR2, HIGH);

  digitalWrite(gR3, HIGH);
  digitalWrite(yR3, HIGH);
  digitalWrite(rR3, LOW);

  digitalWrite(gR4, LOW);
  digitalWrite(yR4, LOW);
  digitalWrite(rR4, HIGH);
}
