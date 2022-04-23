#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int year(int n)
{
	int x = 0;
	if((n % 4 == 0 && n % 100 !=0)|| n % 400 ==0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a = 0;
	printf("请输入年份以判断是否为闰年\n");
	scanf("%d",&a);
	if (year(a) == 1)
	{
		printf("%d是闰年", a);
	}
	else 
	{
		printf("%d不是闰年", a);
	}
	return 0;
}