  #include <SoftwareSerial.h>

  
SoftwareSerial softSerial(2, 4); // RX, TX

  void setup()
{
softSerial.begin(9600);
}


  void loop()
{
  Serial.println(softSerial.read());

if (softSerial.available()) {// Читаем один символ из буфера программного последовательного порта и сохраняем его переменную com

int com = softSerial.read();// Действуем соответственно полученному символу

if (com == '1')
{
  //тут зажигается трансформатор ШИМ с переменным пином на ардуинке
  analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);

analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 51);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 102);  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  delay(200);  // Больше напряжение — выше яркость!
  analogWrite(9, 153);  // все 5 В — полный накал!
  delay(200); // ждём ещё немного перед тем, как начать всё заново
  analogWrite(9, 204);  // держим такую яркость 250 миллисекунд
  delay(200);
  analogWrite(9, 255);  // держим такую яркость 250 миллисекунд
  delay(200);
 
  
}

 
else if (com == '2')
{
  digitalWrite(9, LOW);   //тут тушим трансформаторы
}
  

else if (com == '3')
{
  analogWrite(5, 51);
  delay(250); 

  analogWrite(5, 102);
  delay(250);
 
  analogWrite(5, 153);
  delay(250);

  analogWrite(5, 255);
  delay(250);

  analogWrite(5, 51);
  delay(250); 

  analogWrite(5, 102);
  delay(250);
 
  analogWrite(5, 153);
  delay(250);

  analogWrite(5, 255);
  delay(250);

  analogWrite(5, 51);
  delay(250); 

  analogWrite(5, 102);
  delay(250);
 
  analogWrite(5, 153);
  delay(250);

  analogWrite(5, 255);
  delay(250);
}


 
else if (com == '4')
{
         //тут зажигаем синий светодиод ЛЭП
          analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);

  analogWrite(3, 0);
  delay(100);
  analogWrite(10, 0);
  delay(100);
  analogWrite(6, 0);
  delay(100);
  analogWrite(11, 0);
  delay(100);

  analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);

  analogWrite(3, 0);
  delay(100);
  analogWrite(10, 0);
  delay(100);
  analogWrite(6, 0);
  delay(100);
  analogWrite(11, 0);
  delay(250);

  analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);

   analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);

  analogWrite(3, 0);
  delay(100);
  analogWrite(10, 0);
  delay(100);
  analogWrite(6, 0);
  delay(100);
  analogWrite(11, 0);
  delay(100);

  analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);

  analogWrite(3, 0);
  delay(100);
  analogWrite(10, 0);
  delay(100);
  analogWrite(6, 0);
  delay(100);
  analogWrite(11, 0);
  delay(250);

  analogWrite(3, 85);
  delay(250); 

  analogWrite(3, 170);
  delay(250);
 
  analogWrite(3, 255);
  delay(250);

  analogWrite(10, 85);
  delay(250); 

  analogWrite(10, 170);
  delay(250);
 
  analogWrite(10, 255);
  delay(250);

  analogWrite(6, 85);
  delay(250); 

  analogWrite(6, 170);
  delay(250);
 
  analogWrite(6, 255);
  delay(250);

  analogWrite(11, 85);
  delay(250); 

  analogWrite(11, 170);
  delay(250);
 
  analogWrite(11, 255);
  delay(250);
}
 
  
else if (com == '5')
{
  digitalWrite(3, LOW);  
  digitalWrite(5, LOW); //тут зажигаем синий светодиод
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}
  

else if (com == '6')
{
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
}



else if (com == '0')
{
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  analogWrite(3, LOW);
  analogWrite(5, LOW);
  analogWrite(6, LOW);
  analogWrite(9, LOW);
  analogWrite(10, LOW);
  analogWrite(11, LOW);
  analogWrite(7, LOW);
}



}
}

 


