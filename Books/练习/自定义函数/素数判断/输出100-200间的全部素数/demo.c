#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_qrime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if(n % j == 0)
		return 0;
	}
	return 1;
}
int main()
{
	//输出100-200间的全部素数
	//0 和 1不是素数 只能被1和其本身整数的数才是素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_qrime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}