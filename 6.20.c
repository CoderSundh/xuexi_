#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//���a��ֵ
//	printf("%d\n", &a);//���a�ĵ�ַ &:ȡ��ַ�������
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

//�ַ���ƫ��
int main()
{
	char ch = 1;
	int a = 1;
	float b = 1;
	double d = 1;
	char* p1 = &ch;//������Ϊchar*
	int* p2 = &a;
	float* p3 = &b;
	double* p4 = &d;
	printf("%d\n",&ch);
	printf("%d\n", &a);
	printf("%d\n", &b);
	printf("%d\n", &d);
	printf("2:%d\n", &ch+1);//��ַ���ƫ����1���洢��Ԫ��1���ֽڣ�������-1������ǰƫ�ơ�
	printf("2:%d\n", &a + 1);//��ַ���ƫ����1���洢��Ԫ��4���ֽڣ�
	printf("2:%d\n", &b + 1);//��ַ���ƫ����1���洢��Ԫ��4���ֽڣ�
	printf("2:%d\n", &d + 1);//��ַ���ƫ����1���洢��Ԫ��8���ֽڣ�
	//ƫ�ƵĴ洢��Ԫ���ֽ��������ǵĻ������йأ�char��1���ֽڣ�int��4���ֽڣ�float��4���ֽڣ�double��8���ֽ�
	return 0;
}