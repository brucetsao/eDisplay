// 七段顯示器製作倒數功能 (vturnon)
#define ctlD1 7
#define ctlD2 6

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
#define digitalon HIGH
#define digitaloff LOW

void setup() {               
  PinMode(ctlD1, OUTPUT);  
  PinMode(ctlD2, OUTPUT);  
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
     int i ;
  for (i=0 ; i<99; i++)
         {
          showNumber(i) ;
         delay(50) ; 
         showNumber(-1) ;  

       } 
}
 
 void showNumber(int no)
 {
    if (no == -1)
   {
       ShowSegment(1, -1) ;
   }
   else
   {
      ShowSegment(1, (no/10)) ;
      delayMicroseconds(3000) ;
      ShowSegment(2, (no%10)) ;
      delayMicroseconds(3000) ;
   }
 }
 void ShowSegment(int digital, int number)
 {
     if (digital == 1)
         {
            digitalWrite(ctlD1, digitalon);
            digitalWrite(ctlD2, digitaloff);
         }
         else
         {
            digitalWrite(ctlD1, digitaloff);
            digitalWrite(ctlD2, digitalon);
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

