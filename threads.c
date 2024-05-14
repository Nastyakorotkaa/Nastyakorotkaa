#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
int a = 0;//Иициализация глобальной статистической переменной, доступной из каждого thread'a
//Функция выполняющаяся в оамках второго thread'a 
void *mythread(void *dummy){
	pthread_t mythid;//индетимфмкатор thread'a - для кажлдого имеет свое значение
	mythid = pthread_self();
	a = a+1;
	printf("Thread %ld, Результат вычесления a= %d\n", mythid, a);//Печать индетификатора thread'a и знаячения глобальной переменной
	return NULL;
}
int main () {
	pthread_t thid, mythid;
	int result;
	result = pthread_create(&thid, (pthread_attr_t *)NULL, mythread, NULL);//создание нового thread'a при помощи авзова функции mythread()
	if (result != 0) {
		printf("Ошибка при создании нового thread\'a , возвращенное значение =%d\n", result);
		exit(-1);
	}
	printf("Thread создан, thid = %ld\n,", thid);
	mythid = pthread_self();// созраняем в переменной mythid идитификатор главного thread'a
	a = a+1;
	printf("Thread %ld, Результат вычесленияa = %d\n", mythid, a);
	pthread_join(thid, (void **)NULL);// ожидание завершения поражденного thread'a
	return 0;

}
