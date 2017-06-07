#include <stdio.h>

/*Тип данных, который характеризует нейрон*/
typedef struct Nero
{
	void * data; /*Пока не известно, что должно быть в типе данных Nero*/
} Nero;



/*Прототип функции начала работы программы*/
void main(void);
/*Протип функции работы нейрона*/
double sig(void);

int sum(int a, int b) { return a + b; }


/*Реализация функции начала работы программы*/
void main(void)
{
	int (*a)(int, int) = &sum;
	a(2, 2);
	printf("123");
}


/*Функция эминитрует работу нейрона*/
double sig(void)
{
	return 0;
}