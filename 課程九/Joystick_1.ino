void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int xVal = analogRead(A1);
  int yVal = analogRead(A0);
  int zVal = analogRead(A2);

  String t1 = "X軸數值 = ", t2 = "Y軸數值 = ", t3 = "Z軸數值 = ", t4 = ", ";
  String ShowValue = t1 + xVal + t4 + t2 + yVal + t4 + t3 + zVal;
  Serial.println(ShowValue);
  delay(100);                
}