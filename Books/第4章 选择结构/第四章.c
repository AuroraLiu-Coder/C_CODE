#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//例4.3 输入a,b,c三个数 要求按照由小到大的顺序输出
//int main()
//{
//	float a, b, c, t;
//	printf("请输入三个数(用逗号间隔)\n");
//	scanf("%f,%f,%f", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%.2f,%.2f,%.2f\n",a,b,c);
//	return 0;
//}


//例4.4 输入一个字符，判别它是否为大写字母，
//如果是，将他转换为小写字母，如果不是，则不转换 
//然后输出最后得到的字符(条件运算符 ?)
//int main()
//{
//	printf("请输入字符\n");
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
////相当于if(ch >= 'A' && ch <= 'Z') ch=(ch+32) 
//	//	else  ch=ch;
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{	//请编写程序，实现对奇数和偶数的判断。
//	/*	1）	定义一个int类型的变量x，该变量的值为5。
//		2）	使用if…else语句对x进行判断，如果是奇数就输出“x是奇数”，否则输出“x是偶数”。*/
//	int  x = 5;
//	if (x % 2 != 0)
//		printf("%d是奇数\n", x);
//	else
//		printf("%d是偶数\n", x);
//	return 0;
//}


//请编写程序，实现对“1 + 3 + 5 + 7 + … + 99”的求和功能。
//提示：
//1）使用循环语句实现自然数1~99的遍历。
//2）在遍历过程中，判断当前遍历的数是否为奇数，如果是就累加，否则不加
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 99; i++)
//	{
//		if (i % 2 != 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	printf("请输入星期几的数字\n");
	printf("*******************\n");
	int day = 0;
	scanf("%d", &day);
	printf("*******************\n");
	switch (day)
	{
	case 1:
		printf("今天是星期一\n");
		break;
	case 2:
		printf("今天是星期二\n");
		break;
	case 3:
		printf("今天是星期三\n");
		break;
	case 4:
		printf("今天是星期四\n");
		break;
	case 5:
		printf("今天是星期五\n");
		break;
	case 6:
		printf("今天是星期六\n");
		break;
	case 7:
		printf("今天是星期天\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	printf("*******************\n");
	return 0;
}

//int main()
//{
//	printf("查看是工作日还是休息日\n");
//	//1-5是工作日 6-7是休息日
//	printf("*******************\n");
//	int day = 0;
//	scanf("%d", &day);
//	printf("*******************\n");
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("今天是工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("今天是休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	printf("*******************\n");
//	return 0;
//}