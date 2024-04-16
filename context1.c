// Подключаем библиотеки
#include<sys/types.h>
#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
//Главная функция программы
int main(int argc, char *argv[], char *envp[]) {
        // Объявление переменной
        int result1;
        //Запуск программы cat с аргементом otchet16_04_2024.txt
        //Объявление переменных
        pid_t procid,parentid;//Индетефикаторы процессов
        pid_t result;// Результат системного вызова fork()
        int a = 0;// переменная для проверки работы процесса-родителя и процесса-ребенка
        result = fork();
        if(result < 0) {
                printf("Ошибка при выполнении fork()/n");
                exit(-1);
        }
        else if (result == 0) { 
                a = a+1;
                procid = getpid();//Получение идeтификатора текущегопроцесса
                parentid = getppid();//Получение идентификатора родительского процесса
                printf("Ид. процесса: %d, ид. родителя: %d, значение переменной a: %d/n", procid, parentid, a);
                result = execle("/bin/cat", "/bin/cat", "otchet16_04_2024.txt", 0, envp);
                


        }
        else {
                a = a+555;
                procid = getpid();//Получение идeтификатора текущегопроцесса
                parentid = getppid();//Получение идентификатора родительского процесса
                printf("Ид. процесса: %d, ид. родителя: %d, значение переменной a: %d/n", procid, parentid, a);
	        printf("Ошибка при авполнении системного вызова execle()\n");
		exit(-1);
 	}
        return 0;//Никогда не выполняется
}

