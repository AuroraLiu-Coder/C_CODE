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
	printf("������������ж��Ƿ�Ϊ����\n");
	scanf("%d",&a);
	if (year(a) == 1)
	{
		printf("%d������", a);
	}
	else 
	{
		printf("%d��������", a);
	}
	return 0;
}