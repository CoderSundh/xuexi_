#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���庯��ʵ����2���������ֵ
/*
//��ͨ�ķ���ʵ�����£�
int max(int i, int j);
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������a��ֵ:");
	scanf("%d",&a);
	printf("������b��ֵ:");
	scanf("%d", &b);
	c = max(a,b);
	printf("max=%d\n",c);
	return 0;
}
//�����Ĺ���:�Ƚ�2�����Ĵ�С�����������ֵ
int max(int i,int j)
{
	if (i > j)
		return i;
	else
		return j;
}
*/
//�Ƚ�2�����Ĵ�С�����������ֵ�ĵ�ַ���β�ʹ��ָ�����������ֵ����ʹ��ָ�����͵�ʵ�ַ������£�
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������a��ֵ:");
	scanf("%d", &a);
	printf("������b��ֵ:");
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