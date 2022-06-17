#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数作用域的学习
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

//使用递归调用的形式编写函数实现求:1+2+3+...+n
//1.使用for循环
/*
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	printf("请输入n的值:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum += i;

	}
	printf("1+2+3+...+n的值为:%d\n",sum);
	return 0;
}
*/

/*
//2.使用递归调用的形式
int sum(int n);
int main()
{
	int n = 0;
	int i = 0;
	printf("请输入需要参加计算的最后一项n:");
	scanf("%d",&n);
	i=sum(n);
	printf("1+2+3+...+n的值为:%d\n", i);
	return 0;
}
int sum(int m)
{
	if (m < 1)
		return-1;
	else if (m == 1)
		return 1;
	else
		return m+sum(m-1);
}
*/
