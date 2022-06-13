#include <stdio.h>
/*
int main()
{

	printf("迈曦\n");
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
		printf("%d\n",a);//这个a的值是6，和前面的5不是同一个
		a++;
		printf("%d\n",a);
		++b;//对上面的数值4进行一次自加，结果为5
	}
	printf("%d\n",a);//这个a的值是5，是前面定义的
	printf("%d\n",b);//这个b的值是5，是花括号内的自加结果
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
	printf("请输入n的值：");
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
	printf("请依次输入m和n的值:");
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
	printf("请输入n的值:");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;

	}while(i<=n);

	return 0;
}*/

/*int main()
{
	//求1*2*3-*n
	//1.定义变量 i n a
	//2.使用do...while语句
	//3.要进行的阶乘a=a*i
	//4.判断语句i<=n结束
	int i = 1;
	int n = 0;
	int a = 1;
	printf("请输入n的值:");
	scanf("%d",&n);
	do
	{
		a = a * i;
		i++;

	}
	while(i<=n);
	printf("n的阶乘n!=%d\n",a);
	return 0;
}*/

/*int main()
{
	//计算10-1/2-1/3-1/4-...-1/n
	//1.定义变量 i n 
	//2.输入n的值
	//3.循环的语句do...while do(10-1/n) while(i<=n)
	//4.输出结果
	int i = 2;
	int n = 0;
	float sum = 10;
	printf("请输入n的值:");
	scanf("%d",&n);
	do
	{
		sum = sum - 1.0/i;//注意是1.0，只有这样结果才会是小数
		i++;

	}
	while(i<=n);
	printf("10-1/2-1/3-....1/n的值为:%.2f\n",sum);
	return 0;
}*/

int main()
{
	int i = 1;
	int n = 0;
	int sum = 0;
	printf("请输入n的值:");
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
