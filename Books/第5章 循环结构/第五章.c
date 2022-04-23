#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{//输出1-100的奇数
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 2 == 1)
		{
			printf("%d ", a);
		}

	}

	return 0;
}

//int main()
//{
//	//打印1-10的整数  while循环
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//打印1-10的整数 for循环
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//do  while 循环打印1-10的整数
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}

//例	1-100的累加和  while循环
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//			do...while循环
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("%d\n", sum);
//	return 0;
//}


//			for循环
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//		sum += i;
//		printf("%d\n", sum);
//	return 0;
//}

//例5.4  在全系1000名学生中举行慈善募捐，当总数达到10万元就结束
//统计此时捐款的人数以及平均每人捐款的数目
//#define SUM 100000		//符号常量SUM代表100000
//int main()
//{
//	float amount;//每人捐款数目
//	float avg; //平均每人捐款数目
//	float total; //总捐款数
//	int i; //捐款人数
//	for (i = 1, total = 0; i <= 1000; i++)
//	{
//		printf("请捐款\n");
//		scanf("%f", &amount);
//		total += amount;
//		if (total > SUM)
//			break;
//	}
//	avg = total / i;
//	printf("捐款人数=%d total= %f\n",i, total);
//	return 0;
//}

//例5.5	要求输出100-200之间不能被3整除的数
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 != 0)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//例5.6 输出4 X 5的矩阵		
//int main()
//{
//	int i, j, n = 0;
//	//外层控制行 内层控制列
//	for(i=1;i<=4;i++)
//		for (j = 1; j <= 5; j++,n++)//n用来累计输出数据的个数
//		{
//			if (n % 5 == 0)printf("\n");	//控制在输出5个数据后换行
//			printf("%d\t", i * j);
//		}
//	printf("\n");
//	return 0;
//}


//例5.9  输入一个整数 判定它是否是素数
//int main()
//{
//	int n, i;
//	printf("请输入一个整数\n");
//	scanf("%d", &n);
//		for (i = 2; i < n; i++)
//			if (n % i == 0)break;
//		if (i < n)printf("%d 不是素数\n", n);
//		else printf("%d 是素数\n", n);
//	return 0;
//}


//求n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求1-10的阶乘之和 1！+2!+3!+...+10!
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//习题6 求1-20的阶乘之和 1! + 2! +...+20!
//1!=1 2!=2*1 3!=3*2*1

//int main()
//{
//	double sum = 0, i = 1;
//	int n;
//	for (n = 1; n <= 20; n++)
//	{
//		i *= n;	//i = i * n;
//		sum += i;//sum = sum + i;
//	}
//	printf("%22.15e\n", sum);
//	return 0;
//}

//习题 8. 输出所有的“水仙花数”，所谓的“水仙花数”是指一个3位数。其各位数字立方和等于该数本身
//例如，153是水仙花数 因为153 = 1^3 + 5^3 + 3^3
//int main()
//{
//	int i, j, k, n;
//	for (n = 100; n < 1000; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i * i * i + j * j * j + k * k * k)
//			printf("%d ", n);
//	}
//	printf("\n是水仙花数\n");
//	return 0;
//}


//习题 16:输出以下图案
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//int main()
//{
//	int i,j,k;
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 2 - i; j++)
//			printf("");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++) 
//	{
//		for (j = 0; j <= i; j++)
//			printf("");
//		for(k = 0; k <= 4 - 2 * i; k++)
//			printf("*");
//			printf("\n");
//	}
//	return 0;
//}