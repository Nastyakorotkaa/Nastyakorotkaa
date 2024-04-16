#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main() {
	int fd;
	size_t size;
	char string[]="Group 3.120.2.21";
	if((fd = open("file1.txt", O_WRONLY|O_CREAT, 0666))<0) {
		printf("Ошибка при открывании файла на запись\n");
		exit(-1);

	}
	size = (fd, string, 17);
	if (size  !=17) {
		printf("Не удалось записать всю строку в файл\n");
		exit(-1);
	}
	if (close(fd)<0) {
                printf("Не удалось записать файл\n");
                exit(-1);
        }
	return 0;
}
