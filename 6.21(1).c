#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ�ֽ�������������ֵ��Ҫ�������β�ʹ��ָ�����
#include <stdio.h>
void exc(int* x, int* y);//����������
int main()
{
	int a = 0;
	int b = 0;
	int* c = 0;
	printf("������������ͬ��ֵ:");
	scanf("%d%d",&a,&b);
	exc(&a,&b);//�����ĵ���
	printf("�������һ��ֵΪ:%d,\n�ڶ���ֵΪ:%d\n",a,b);
	return 0;
}
//���������ã���������������ֵ
void exc(int *x,int *y)
{
	int temp = 0;
	temp = *x;//��x��ַ�е�����ֵ��temp
	*x = *y;//��y��ַ�е�����ֵ��x��ַ��
	*y = temp;//��temp��ֵ��ֵ��y��ַ��
}