// Подключаем библиотеку Software Serial

#include <SoftwareSerial.h>

// Объявляем задействованные дискретные каналы контроллера для связи

SoftwareSerial softSerial(2, 4); // RX, TX




void setup(){

Serial.begin(9600); // Обычная скорость передачи данных

softSerial.begin(9600);// Инициализация программного последовательного порта
}

void loop(){

// Проверяем получение команд от компьютера

if (Serial.available()){

// Отправляем полученную команду компьютера на программный UART

softSerial.write(Serial.read());


}


}
