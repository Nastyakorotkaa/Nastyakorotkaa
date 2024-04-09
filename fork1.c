// Программа для иллюстрации

//ПОДКЛЮЧЕНИЕ БИБЛИОТЕК
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//Главная функция программы
int main() {
	//Объявление переменных
	pid_t procid,parentid;//Индетефикаторы процессов
	pid_t result;// Результат системного вызова fork()
	int a = 0;// переменная для проверки работы процесса-родителя и процесса-ребенка
	result = fork();
	a = a+1;
	procid = getpid();//Получение идeтификатора текущегопроцесса
	parentid = getppid();//Получение идентификатора родительского процесса
	printf("Ид. процесса: %d, ид. родителя: %d, значение переменной a: %d/n", procid, parentid, a);
	return 0;
}