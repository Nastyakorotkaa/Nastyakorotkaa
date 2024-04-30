#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
// Создаем массив для хранения файловых дискрипторов для чтения и для записи
	int fd[2];
	pid_t result;
	size_t size;
	char string[]="Hello, world!";
	char resstring[14];
	/*Попытаемся создать pipe*/
	if(pipe(fd)<0){
	/*Если создать pipe не удалось,печатаем в этом сообщении и прекращаем работу*/
		printf("Can\'t create pipe\n");
		exit(-1);
	//Возврат признака аварийного закрытия программы (-1)
	}
	result = fork();
	if (result<0) {
		printf("Ошибка выполнения fork()\n");
		exit(-1);
	}
	else if (result>0){
		if (close(fd[0])<0) {
			printf("Ошибка при закрытии pipe на чтение\n");
			exit(-1);
		}

		size = write(fd[1],string,14);
	//Проверка количества байт, записанных в строку с помощию системного вызова write()
		if (size !=14){
			printf("Can\'t write all string\n");
			exit(-1);
		}
		printf("Процесс-родитель записвл информацию в pipe и заканчивает работу\n");
		if(close(fd[1]) <0 ) {
			printf("Не получилось закрыть исхожящий поток\n");
			exit(-1);
		}
	}
	else {
		//Закрытие pipe для записи
        	if (close(fd[1])<0){
                	printf("Cant\'t close output stream\n");
                 	exit(-1);
		}
		size = read(fd[0],resstring,14);
		//Проверка количества байт, прочитанных из pipe() c  помощию read()
		if(size != 14) {
        		printf("Cant\'t read string\n");
        		exit(-1);
        	}
		printf("%s\n",resstring);
		//Закратие pipe для чтения
		if(close(fd[0])<0) {
			printf("Cant\'t close input stream\n");
		exit(-1);
		}
	}
	return 0;
}





