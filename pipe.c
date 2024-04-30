#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
// Создаем массив для хранения файловых дискрипторов для чтения и для записи
	int fd1[2], fd2[2];
	pid_t result;
	size_t size;
	char string1[]="Hello, child!", string2[] ="Hello, parent!";
	char resstring1[13], resstring2[14];
	/*Попытаемся создать pipe*/
	if(pipe(fd1)<0){
	/*Если создать pipe не удалось,печатаем в этом сообщении и прекращаем работу*/
		printf("Can\'t create pipe\n");
		exit(-1);
	//Возврат признака аварийного закрытия программы (-1)
	}
	if(pipe(fd2)<0){
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
		if (close(fd1[0])<0) {
			printf("Ошибка при закрытии pipe на чтение\n");
			exit(-1);
		}
		if (close(fd2[1])<0) {
                        printf("Ошибка при закрытии pipe на чтение\n");
                        exit(-1);
                }
		size = write(fd1[1],string1,13);
	//Проверка количества байт, записанных в строку с помощию системного вызова write()
		if (size !=13){
			printf("Can\'t write all string\n");
			exit(-1);
		}
		printf("Процесс-родитель записал информацию в pipe\n");
		size = read(fd2[0],resstring2,14);
                //Проверка количества байт, прочитанных из pipe() c  помощию read()
                if(size != 14) {
                        printf("Cant\'t read string\n");
                        exit(-1);
                }
                printf("Информация от дочернего процесса: %s\n",resstring2);
		if(close(fd1[1]) <0 ) {
			printf("Не получилось закрыть исхожящий поток\n");
			exit(-1);
		}
		if(close(fd2[0]) <0 ) {
                        printf("Не получилось закрыть входящий поток\n");
                        exit(-1);
                }

	}
	else {
		//Закрытие pipe для записи
        	if (close(fd1[1])<0){
                	printf("Cant\'t close output stream\n");
                 	exit(-1);
		}
		if (close(fd2[0])<0){
                        printf("Cant\'t close intput stream\n");
                        exit(-1);
                }
		size = read(fd1[0],resstring1,13);
		//Проверка количества байт, прочитанных из pipe() c  помощию read()
		if(size != 13) {
        		printf("Cant\'t read string\n");
        		exit(-1);
        	}
		printf("%s\n",resstring1);
		size = write(fd2[1],string2,14);
       		 //Проверка количества байт, записанных в строку с помощию системного вызова write()
                if (size !=14){
                        printf("Can\'t write all string\n");
                        exit(-1);
                }
                printf("Процесс-ребенок записал информацию в pipe\n");
		//Закратие pipe для чтения
		if(close(fd1[0])<0) {
			printf("Cant\'t close input stream\n");
			exit(-1);
		}
		 if(close(fd2[1])<0) {
                        printf("Cant\'t close input stream\n");
                	exit(-1);
                }

	}
	return 0;
}





