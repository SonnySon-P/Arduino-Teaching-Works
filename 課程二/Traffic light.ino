int pwmR = 0;
int pwmG = 0;
int pwmB = 0;

void setup() 
{
  // 第一顆燈泡
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  // 第二顆燈泡
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  // 第三顆燈泡
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}


void loop() 
{
  // 亮綠燈
  reset();
  pwmR = 0;
  pwmG = 255;
  pwmB = 0;
  analogWrite(A3, pwmR);
  analogWrite(A4, pwmG);
  analogWrite(A5, pwmB);
  delay(3000);

  // 亮黃燈
  reset();
  pwmR = 255;
  pwmG = 255;
  pwmB = 0;
  analogWrite(9, pwmR);
  analogWrite(8, pwmG);
  analogWrite(7, pwmB);
  delay(1000);

  // 亮紅燈
  reset();
  pwmR = 255;
  pwmG = 0;
  pwmB = 0;
  analogWrite(12, pwmR);
  analogWrite(11, pwmG);
  analogWrite(10, pwmB);
  delay(3000);
}

void reset() {
  pwmR = 0;
  pwmG = 0;
  pwmB = 0;

  analogWrite(A3, pwmR);
  analogWrite(A4, pwmG);
  analogWrite(A5, pwmB);
  analogWrite(9, pwmR);
  analogWrite(8, pwmG);
  analogWrite(7, pwmB);
  analogWrite(12, pwmR);
  analogWrite(11, pwmG);
  analogWrite(10, pwmB);
}