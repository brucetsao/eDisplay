// 七段顯示器製作倒數功能 (vturnon)
#define aPin 22
#define bPin 24
#define cPin 26
#define dPin 28
#define ePin 30
#define fPin 32
#define gPin 34
#define dotPin 36
#define turnon LOW
#define turnoff HIGH


void setup() {               
  PinMode(aPin, OUTPUT);  
  PinMode(bPin, OUTPUT);
  PinMode(cPin, OUTPUT);
  PinMode(dPin, OUTPUT);
  PinMode(ePin, OUTPUT);
  PinMode(fPin, OUTPUT);
  PinMode(gPin, OUTPUT);
  PinMode(dotPin, OUTPUT);
  digitalWrite(dotPin, turnoff);  // 關閉小數點
}

void loop() {
  // 顯示數字 '9'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnoff);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '8'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnon);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '7'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnoff);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnoff);
  digitalWrite(gPin, turnoff);
  delay(1000);
  // 顯示數字 '6'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnoff);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnon);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '5'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnoff);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '4'
  digitalWrite(aPin, turnoff);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnoff);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '3'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnoff);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '2'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnoff);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnon);
  digitalWrite(fPin, turnoff);
  digitalWrite(gPin, turnon);
  delay(1000);
  // 顯示數字 '1'
  digitalWrite(aPin, turnoff);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnoff);
  digitalWrite(ePin, turnoff);
  digitalWrite(fPin, turnoff);
  digitalWrite(gPin, turnoff);
  delay(1000);
  // 顯示數字 '0'
  digitalWrite(aPin, turnon);
  digitalWrite(bPin, turnon);
  digitalWrite(cPin, turnon);
  digitalWrite(dPin, turnon);
  digitalWrite(ePin, turnon);
  digitalWrite(fPin, turnon);
  digitalWrite(gPin, turnoff);  
  // 暫停 4 秒鐘
  delay(4000);
}


