#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	z = x;
//	else
//	z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a , b);
//	printf("%d\n", max);
//	return 0;
//
//}

void swap(int* pa,int* pb)
{
	int temp=0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	//���һ������ �����������ͱ�����ֵ
	int a = 10;
	int b = 20;
	printf("����ǰ��%d %d", a, b);
	swap(&a, &b);
	printf("������%d %d", a, b);
	return 0;
}