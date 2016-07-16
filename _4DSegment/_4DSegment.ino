// 七段顯示器製作倒數功能 (vturnon)
#define ctlD1 7
#define ctlD2 6
#define ctlD3 5
#define ctlD4 4

#define aPin 22
#define bPin 24
#define cPin 26
#define dPin 28
#define ePin 30
#define fPin 32
#define gPin 34
#define dotPin 36
#define turnon HIGH
#define turnoff LOW
#define digitalon LOW
#define digitaloff HIGH
int number = 0;

unsigned long time_previous;
void setup() {               
  PinMode(ctlD1, OUTPUT);  
  PinMode(ctlD2, OUTPUT);  
  PinMode(ctlD3, OUTPUT);  
  PinMode(ctlD4, OUTPUT);  
  PinMode(aPin, OUTPUT);  
  PinMode(bPin, OUTPUT);
  PinMode(cPin, OUTPUT);
  PinMode(dPin, OUTPUT);
  PinMode(ePin, OUTPUT);
  PinMode(fPin, OUTPUT);
  PinMode(gPin, OUTPUT);
  PinMode(dotPin, OUTPUT);
  digitalWrite(dotPin, turnoff);  // 關閉小數點
   Serial.begin(9600);
  
}

void loop() {
     int i ;
  // 經過一秒後就讓number加1 
  unsigned long time_now = millis();
  if(time_now - time_previous > 1000){
    number++;
    time_previous += 1000;
    Serial.println("number=%d\n", number);
  }

  // 不斷地寫入數字
  showNumber(number);
}
 
 void showNumber(int no)
 {
   if (no == -1)
   {
       ShowSegment(1, -1) ;
   }
   else
   {
      ShowSegment(1, (no/1000)) ;
      delay(5) ;
      ShowSegment(2, (no/100)) ;
      delay(5) ;
      ShowSegment(3, (no/10)) ;
     delay(5) ;
      ShowSegment(4, (no%10)) ;
     delay(5) ;
   }
 }
 void ShowSegment(int digital, int number)
 {
     switch (digital)
         {
             case 1:
            digitalWrite(ctlD1, digitalon);
            digitalWrite(ctlD2, digitaloff);
            digitalWrite(ctlD3, digitaloff);
            digitalWrite(ctlD4, digitaloff);
             break ;
             
             case 2:
            digitalWrite(ctlD1, digitaloff);
            digitalWrite(ctlD2, digitalon);
            digitalWrite(ctlD3, digitaloff);
            digitalWrite(ctlD4, digitaloff);
             break ;
             
             case 3:
            digitalWrite(ctlD1, digitaloff);
            digitalWrite(ctlD2, digitaloff);
            digitalWrite(ctlD3, digitalon);
            digitalWrite(ctlD4, digitaloff);
             break ;
             
             case 4:
            digitalWrite(ctlD1, digitaloff);
            digitalWrite(ctlD2, digitaloff);
            digitalWrite(ctlD3, digitaloff);
            digitalWrite(ctlD4, digitalon);
             break ;
         }
            
    switch (number)
      {
        case 9:
                 // 顯示數字 '9'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnoff);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnon);
           break ;
           
           case 8:
          // 顯示數字 '8'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnon);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnon);
          break ;
          
          case 7:
          // 顯示數字 '7'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnoff);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnoff);
          digitalWrite(gPin, turnoff);
          break ;
          
          case 6:
          // 顯示數字 '6'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnoff);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnon);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnon);
          break ;
          
          case 5:
          // 顯示數字 '5'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnoff);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnon);
          break ;
          
          case 4:
          // 顯示數字 '4'
          digitalWrite(aPin, turnoff);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnoff);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnon);
          break ;
          
          case 3:
          // 顯示數字 '3'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnoff);
          digitalWrite(gPin, turnon);
          break ;
         
           case 2: 
          // 顯示數字 '2'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnoff);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnon);
          digitalWrite(fPin, turnoff);
          digitalWrite(gPin, turnon);
          break ;
          
          case 1:
          // 顯示數字 '1'
          digitalWrite(aPin, turnoff);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnoff);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnoff);
          digitalWrite(gPin, turnoff);
          break ;
          
          case 0:
          // 顯示數字 '0'
          digitalWrite(aPin, turnon);
          digitalWrite(bPin, turnon);
          digitalWrite(cPin, turnon);
          digitalWrite(dPin, turnon);
          digitalWrite(ePin, turnon);
          digitalWrite(fPin, turnon);
          digitalWrite(gPin, turnoff);  
           break ;

          case -1:
          // all Off
          digitalWrite(aPin, turnoff);
          digitalWrite(bPin, turnoff);
          digitalWrite(cPin, turnoff);
          digitalWrite(dPin, turnoff);
          digitalWrite(ePin, turnoff);
          digitalWrite(fPin, turnoff);
          digitalWrite(gPin, turnoff);  
           break ;

      } 
 }

