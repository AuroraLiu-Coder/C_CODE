#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��֪���ε��ϵ�Ϊa���µ�Ϊb����Ϊh�����ó���ʵ�������ε������
	float a, b, h,area;
	printf("���������ε��ϵ� �µ� ��\n");
	scanf("%f %f %f", &a, &b, &h);
	area = ((a + b)*h) / 2;
	printf("���ε����Ϊ: %.2f\n", area);
	return 0;
}