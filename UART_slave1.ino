// Подключение библиотеки Software Serial

#include <SoftwareSerial.h>

// Назначение задействованных дискретных каналов

SoftwareSerial softSerial1(2, 4); // RX, TX


// Дискретный канал, на котором висит встроенный светодиод

int LED = 13;

void setup(){

softSerial1.begin(9600);


pinMode(LED, OUTPUT); // Определение светодиодного вывода как выход

}

void loop(){ // Проверяем, есть ли что-нибудь в буфере программного последовательного порта

if (softSerial1.available()){// Читаем один символ из буфера программного последовательного порта и сохраняем его переменную com

int com = softSerial1.read();// Действуем соответственно полученному символу

if (com == 'q'){// Выключение светодиода

digitalWrite(LED, LOW);

}

else if (com == 'w'){// Включение светодиода

digitalWrite(LED, HIGH);

}

}



}
