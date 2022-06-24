#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//DIY库函数 DIY strcpy

//方法1：
char* myStrcpy1(char* pDes, const char* pSrc)
//const 的意思是用const定义的变量的值是不允许改变的，不允许给他重新赋值，防止在这个函数中传来的数值被改变
{
	if(0==pDes||0==pSrc){
		return 0;
	}
	char* t = pDes;
	while (*pSrc != '\0')//对将要复制的内容进行判断
	{
		*pDes++ = *pSrc++;
	}
	*pDes = '\0';//其最后一项直接赋值为'\0'，这样在后面输出时可在此处直接结束
	return t;
}
int	main(void)
{
	char a[100] = "china";
	char b[100] = "japan";
	char t[100] = "";
	myStrcpy1(t, a);
	myStrcpy1(a, b);
	myStrcpy1(b, t);
	puts(a);
	puts(b);
	return 0;
}
