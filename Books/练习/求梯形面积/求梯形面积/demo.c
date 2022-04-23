#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//已知梯形的上底为a，下底为b，高为h，请用程序实现求梯形的面积。
	float a, b, h,area;
	printf("请输入梯形的上底 下底 高\n");
	scanf("%f %f %f", &a, &b, &h);
	area = ((a + b)*h) / 2;
	printf("梯形的面积为: %.2f\n", area);
	return 0;
}