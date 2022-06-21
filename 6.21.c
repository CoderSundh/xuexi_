#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//定义函数实现求2个数的最大值
/*
//普通的方法实现如下：
int max(int i, int j);
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入a的值:");
	scanf("%d",&a);
	printf("请输入b的值:");
	scanf("%d", &b);
	c = max(a,b);
	printf("max=%d\n",c);
	return 0;
}
//函数的功能:比较2个数的大小，并返回最大值
int max(int i,int j)
{
	if (i > j)
		return i;
	else
		return j;
}
*/
//比较2个数的大小，并返回最大值的地址，形参使用指针变量，返回值类型使用指针类型的实现方法如下：
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入a的值:");
	scanf("%d", &a);
	printf("请输入b的值:");
	scanf("%d", &b);
	c = max(&a, &b);
	printf("max=%d\n", c);
	return 0;
}
int max(int* i, int* j)
{
	if (*i > *j)
		return *i;
	else
		return *j;
}