#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//输出a的值
//	printf("%d\n", &a);//输出a的地址 &:取地址运算符号
//	printf("%x\n", &a);
//	printf("%p\n", &a);
//	return 0;
//}

/*
int main()
{
	char * p1;
	char* p2;
	char* p3;
	char* p4;
	printf("%d\n",sizeof(p1));
	printf("%d\n", sizeof(p2));
	printf("%d\n", sizeof(p3));
	printf("%d\n", sizeof(p4));
	return 0;
}
*/

//字符的偏移
int main()
{
	char ch = 1;
	int a = 1;
	float b = 1;
	double d = 1;
	char* p1 = &ch;//基类型为char*
	int* p2 = &a;
	float* p3 = &b;
	double* p4 = &d;
	printf("%d\n",&ch);
	printf("%d\n", &a);
	printf("%d\n", &b);
	printf("%d\n", &d);
	printf("2:%d\n", &ch+1);//地址向后偏移了1个存储单元（1个字节）【若是-1，则向前偏移】
	printf("2:%d\n", &a + 1);//地址向后偏移了1个存储单元（4个字节）
	printf("2:%d\n", &b + 1);//地址向后偏移了1个存储单元（4个字节）
	printf("2:%d\n", &d + 1);//地址向后偏移了1个存储单元（8个字节）
	//偏移的存储单元的字节数与他们的基类型有关，char有1个字节，int有4个字节，float有4个字节，double有8个字节
	return 0;
}