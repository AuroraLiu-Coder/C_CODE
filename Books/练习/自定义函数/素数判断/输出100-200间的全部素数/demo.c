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
	//���100-200���ȫ������
	//0 �� 1�������� ֻ�ܱ�1���䱾������������������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_qrime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}