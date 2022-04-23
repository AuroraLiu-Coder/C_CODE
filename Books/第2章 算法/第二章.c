#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
//Çó5!
	int t = 1;
	int i = 2;
	while (i <= 5) 
	{
		t = t * i;
		i = i + 1;
	}
	printf("%d", t);
	return 0;
}