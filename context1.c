//Подключение библиотек
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//Главная функция программы
int main(int argc, char *argv[], char *envp[]) {
	int result;
	//Запуск программы cat с аргементом otchet16_04_2024.txt
	result = execle("/bin/cat", "/bin/cat", "otchet16_04_2024.txt", 0, envp);
	//printf() выполняется только в случае ошибки вызова execle()
	printf("Ошибка при авполнении системного вызова execle()\n");
	exit(-1);
	return 0;//Никогда не выполняется
}
