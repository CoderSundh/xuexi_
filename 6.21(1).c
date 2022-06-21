#define _CRT_SECURE_NO_WARNINGS 1
//编写函数实现交换两个变量的值，要求函数的形参使用指针变量
#include <stdio.h>
void exc(int* x, int* y);//函数的声明
int main()
{
	int a = 0;
	int b = 0;
	int* c = 0;
	printf("请输入两个不同的值:");
	scanf("%d%d",&a,&b);
	exc(&a,&b);//函数的调用
	printf("交换后第一个值为:%d,\n第二个值为:%d\n",a,b);
	return 0;
}
//函数的作用：交换两个变量的值
void exc(int *x,int *y)
{
	int temp = 0;
	temp = *x;//将x地址中的数赋值给temp
	*x = *y;//把y地址中的数赋值到x地址中
	*y = temp;//把temp的值赋值到y地址中
}