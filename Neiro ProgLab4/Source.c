#include <stdio.h>

/*��� ������, ������� ������������� ������*/
typedef struct Nero
{
	void * data; /*���� �� ��������, ��� ������ ���� � ���� ������ Nero*/
} Nero;



/*�������� ������� ������ ������ ���������*/
void main(void);
/*������ ������� ������ �������*/
double sig(void);

int sum(int a, int b) { return a + b; }


/*���������� ������� ������ ������ ���������*/
void main(void)
{
	int (*a)(int, int) = &sum;
	a(2, 2);
	printf("123");
}


/*������� ���������� ������ �������*/
double sig(void)
{
	return 0;
}