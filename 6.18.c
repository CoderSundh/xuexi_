#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun(int b);//void fun(int b); 
int main()
{
	int a = 10;
	int c = 0;
	//c=fun(a);
	fun(a);
	c = c + fun(a);
	printf("%d\n",a);
	printf("%d\n", c);
	return 0;
}
int fun(int b)//void fun(int b)
{
	b = 0;
	//return b;
	//return 2;
}
