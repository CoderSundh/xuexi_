#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

函数作用域的学习
int a = 1;
int b = 1;
int c = 2;

int main ()
{
	int a = 3;
	int sum = 0;
	sum = a + b+c;
	{
		//int a = 2;
		int add = 0;
		b = 2;
		add = a + b + c;
		printf("%d\n", add);
	}
	/*a = 3;
	int sum = 0;
	sum = a + b + c;*/
	//printf("%d\n",sum);

	return 0;
}
