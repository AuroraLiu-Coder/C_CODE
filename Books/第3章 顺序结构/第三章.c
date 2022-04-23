#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//例3.1 将以华氏法表示的温度转换为摄氏度
//int main()
//{
//	float f, c;	//定义变量
//	f = 64.0;	//指定f的值
//	c = (5.0 / 9) * (f - 32);	//利用公式计算c的值
//	printf("f=%f\nc=%f\n", f, c);	//输出c的值
//	return 0;
//}

//例3.3 给定一个大写字母 要求以小写字母输出
//int main()
//{
//	char c1, c2;
//	printf("请输入需要转换的大写字母\n");
//	scanf("%c", &c1);
//	c2 = (c1 + 32);
//	printf("%c\n", c2);
//	return 0;
//}

//例3.4 已知三角形三边求面积 (公式为海伦公式)
//#include<math.h>
//int main()
//{
//	double a, b, c,s,area;	//定义变量
//	//对边长 a,b,c 赋值
//	a = 3.67;				
//	b = 5.43;				
//	c = 6.21;				
//	s = (a + b + c) / 2;	//计算s
//	area = sqrt(s * (s - a) * (s - b) * (s - c));	//计算area
//	printf("%1f\t%1f\t%1f\n", a, b, c);	//输出三边 a,b,c的值
//	printf("area=%1f\n", area);	//输出面积area的值
//	return 0;
//}


//例3.8 先后输出BOY三个字符
//int main()
//{
//	//定义字符变量并赋初值，然后使用putchar函数输出这三个字符变量的值
//	char a='B',b='O',c='Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}


//例3.10  适用于任何大写字母 输入一个大写字母，将其转换为小写
//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = (c1 + 32);
//	putchar(c2);
//	return 0;
//}