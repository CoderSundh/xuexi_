#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//DIY�⺯�� DIY strcpy

//����1��
char* myStrcpy1(char* pDes, const char* pSrc)
//const ����˼����const����ı�����ֵ�ǲ�����ı�ģ�������������¸�ֵ����ֹ����������д�������ֵ���ı�
{
	if(0==pDes||0==pSrc){
		return 0;
	}
	char* t = pDes;
	while (*pDes != '\0')
	{
		*pDes++ = *pSrc++;
	}
	*pDes = '\0';
	return t;
}
int	main(void)
{
	char a[100] = "china";
	char b[100] = "japan";
	char t[100] = "     ";
	myStrcpy1(t, a);
	myStrcpy1(a, b);
	myStrcpy1(b, t);
	puts(a);
	puts(b);
	return 0;
}