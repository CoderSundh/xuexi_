#include <stdio.h>
/*
int main()
{

	printf("����\n");
	return 0;
}
*/
/*int main()
{
	int height=170;
	printf("%d\n",height);
	return 0;
} */
/*int main()
{
	int a = 0;
	a = 20;
	a++;
	printf("%d\n",a++);
	printf("%d\n",a);
	return 0;
}*/
/*int main()
{
	int a = 0;
	a = 20;
	++a;
	printf("%d\n",++a);
	printf("%d\n",a);
	return 0;
}*/
/*int main()
{
	int a = 10;
	int b = 1;
	printf("%d\n",a>8&&--b);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}*/
/*int main()
{
	int a = 0;
	int b = 0;
	a = 5;
	b = 4;
	{
		int a = 6;
		printf("%d\n",a);//���a��ֵ��6����ǰ���5����ͬһ��
		a++;
		printf("%d\n",a);
		++b;//���������ֵ4����һ���Լӣ����Ϊ5
	}
	printf("%d\n",a);//���a��ֵ��5����ǰ�涨���
	printf("%d\n",b);//���b��ֵ��5���ǻ������ڵ��Լӽ��
	return 0;
}*/

/*
int main()
{
	int b = 0;
	b = 4;
	{
		int a = 6;
		printf("%d\n",a);
		a++;
		printf("%d\n",a);
		b++;

	}
	b++;
	printf("%d\n",b);
	return 0;
}
*/

/*
int main()
{
	int a = 1234;
	printf("%6d\n",a);
	printf("%4d\n",a);
	printf("%3d\n",a);
	printf("%2d\n",a);
	return 0;
}
*/
/*int main()
{
	int i = 1;
	int n = 0;
	printf("������n��ֵ��");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}*/

/*int main()
{
	//int i = 1;
	int n = 0;
	int m = 0;
	int sum = 0;
	printf("����������m��n��ֵ:");
	scanf("%d%d",&m,&n);// 1  5
	//i = n - m;
	do
	{
		sum += m;//sum=0+1
		m++;//1+1=2
	}while(m <= n);
	printf ("sum=%d\n",sum);
	return 0;
}*/

/*int main()
{
	int i = 1;
	int n = 0;
	printf("������n��ֵ:");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;

	}while(i<=n);

	return 0;
}*/

/*int main()
{
	//��1*2*3-*n
	//1.������� i n a
	//2.ʹ��do...while���
	//3.Ҫ���еĽ׳�a=a*i
	//4.�ж����i<=n����
	int i = 1;
	int n = 0;
	int a = 1;
	printf("������n��ֵ:");
	scanf("%d",&n);
	do
	{
		a = a * i;
		i++;

	}
	while(i<=n);
	printf("n�Ľ׳�n!=%d\n",a);
	return 0;
}*/

/*int main()
{
	//����10-1/2-1/3-1/4-...-1/n
	//1.������� i n 
	//2.����n��ֵ
	//3.ѭ�������do...while do(10-1/n) while(i<=n)
	//4.������
	int i = 2;
	int n = 0;
	float sum = 10;
	printf("������n��ֵ:");
	scanf("%d",&n);
	do
	{
		sum = sum - 1.0/i;//ע����1.0��ֻ����������Ż���С��
		i++;

	}
	while(i<=n);
	printf("10-1/2-1/3-....1/n��ֵΪ:%.2f\n",sum);
	return 0;
}*/

int main()
{
	int i = 1;
	int n = 0;
	int sum = 0;
	printf("������n��ֵ:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
		printf("sum:%d\n",sum);
		if (sum > 10)continue;
		printf("i=%d\n",i);
	}

	return 0;
}
