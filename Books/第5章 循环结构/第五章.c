#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{//���1-100������
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 2 == 1)
		{
			printf("%d ", a);
		}

	}

	return 0;
}

//int main()
//{
//	//��ӡ1-10������  whileѭ��
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//��ӡ1-10������ forѭ��
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//do  while ѭ����ӡ1-10������
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//		return 0;
//}

//��	1-100���ۼӺ�  whileѭ��
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//			do...whileѭ��
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("%d\n", sum);
//	return 0;
//}


//			forѭ��
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//		sum += i;
//		printf("%d\n", sum);
//	return 0;
//}

//��5.4  ��ȫϵ1000��ѧ���о��д���ļ�裬�������ﵽ10��Ԫ�ͽ���
//ͳ�ƴ�ʱ���������Լ�ƽ��ÿ�˾�����Ŀ
//#define SUM 100000		//���ų���SUM����100000
//int main()
//{
//	float amount;//ÿ�˾����Ŀ
//	float avg; //ƽ��ÿ�˾����Ŀ
//	float total; //�ܾ����
//	int i; //�������
//	for (i = 1, total = 0; i <= 1000; i++)
//	{
//		printf("����\n");
//		scanf("%f", &amount);
//		total += amount;
//		if (total > SUM)
//			break;
//	}
//	avg = total / i;
//	printf("�������=%d total= %f\n",i, total);
//	return 0;
//}

//��5.5	Ҫ�����100-200֮�䲻�ܱ�3��������
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 != 0)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//��5.6 ���4 X 5�ľ���		
//int main()
//{
//	int i, j, n = 0;
//	//�������� �ڲ������
//	for(i=1;i<=4;i++)
//		for (j = 1; j <= 5; j++,n++)//n�����ۼ�������ݵĸ���
//		{
//			if (n % 5 == 0)printf("\n");	//���������5�����ݺ���
//			printf("%d\t", i * j);
//		}
//	printf("\n");
//	return 0;
//}


//��5.9  ����һ������ �ж����Ƿ�������
//int main()
//{
//	int n, i;
//	printf("������һ������\n");
//	scanf("%d", &n);
//		for (i = 2; i < n; i++)
//			if (n % i == 0)break;
//		if (i < n)printf("%d ��������\n", n);
//		else printf("%d ������\n", n);
//	return 0;
//}


//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��1-10�Ľ׳�֮�� 1��+2!+3!+...+10!
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//ϰ��6 ��1-20�Ľ׳�֮�� 1! + 2! +...+20!
//1!=1 2!=2*1 3!=3*2*1

//int main()
//{
//	double sum = 0, i = 1;
//	int n;
//	for (n = 1; n <= 20; n++)
//	{
//		i *= n;	//i = i * n;
//		sum += i;//sum = sum + i;
//	}
//	printf("%22.15e\n", sum);
//	return 0;
//}

//ϰ�� 8. ������еġ�ˮ�ɻ���������ν�ġ�ˮ�ɻ�������ָһ��3λ�������λ���������͵��ڸ�������
//���磬153��ˮ�ɻ��� ��Ϊ153 = 1^3 + 5^3 + 3^3
//int main()
//{
//	int i, j, k, n;
//	for (n = 100; n < 1000; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i * i * i + j * j * j + k * k * k)
//			printf("%d ", n);
//	}
//	printf("\n��ˮ�ɻ���\n");
//	return 0;
//}


//ϰ�� 16:�������ͼ��
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//int main()
//{
//	int i,j,k;
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 2 - i; j++)
//			printf("");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++) 
//	{
//		for (j = 0; j <= i; j++)
//			printf("");
//		for(k = 0; k <= 4 - 2 * i; k++)
//			printf("*");
//			printf("\n");
//	}
//	return 0;
//}