#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main() {
	int fd;
	size_t size;
	char string[17];
	if((fd = open("file.txt", O_RDONLY))<0) {
		printf("Ошибка при открывании файла на чтение \n");
		exit(-1);
	}
	size = read(fd, string, 17);
	if (size < 0) {
		printf("Не удалось прочитать  всю строку из файла\n");
		exit(-1);
	}
	printf("%s\n", string);
	if (close(fd)<0) {
                printf("Не удалось записать файл\n");
                exit(-1);
        }
	return 0;
}
