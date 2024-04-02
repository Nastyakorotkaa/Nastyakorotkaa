//Подключение библиотек
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//Главная функция программы
int main() {
//Объявление переменных 
        pid_t process;
	pid_t parents;
//Системный вызов getpid()
        process = getpid();
//Системный вызов getppid
        parents = getppid();
        printf("Ид. текущего процееса %d\n", process);
        printf("Ид. процесса родителя %d\n", parents);
//Возврат значения "0" из главной функции
        return 0;
}
