#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数和函数之间可以根据实际的需求进行组合的，也就是互相调用的。
// 函数嵌套调用
//void one_y()
//{
//	printf("hehe\n");
//}
//void three_y()
//{
//	char i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		one_y();
//	}
//}
//int main()
//{	
//	three_y();
//	return 0;
//}


#include <string.h>
int main()
{	//一个函数的返回值作为另外一个函数的参数 链式访问
	/*char arr1[20] = { 0 };
	char arr2[] = {"bit"};
	printf("%s\n", strcpy(arr1, arr2));*/

	printf("%d", printf("%d", printf("%d", 43)));
	//结果是啥？
	//注：printf函数的返回值是打印在屏幕上字符的个数

	//结果是4321  原因是 printf打印的是函数返回的是打印在屏幕上的字符的个数
	// 43 2 1
	//首先打印43 然后屏幕上只有两个字符 所以打印 2 然后屏幕上只有一个字符 2 所以打印 1
	return 0;
}