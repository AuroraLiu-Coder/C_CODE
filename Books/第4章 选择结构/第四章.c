#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��4.3 ����a,b,c������ Ҫ������С�����˳�����
//int main()
//{
//	float a, b, c, t;
//	printf("������������(�ö��ż��)\n");
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


//��4.4 ����һ���ַ����б����Ƿ�Ϊ��д��ĸ��
//����ǣ�����ת��ΪСд��ĸ��������ǣ���ת�� 
//Ȼ��������õ����ַ�(��������� ?)
//int main()
//{
//	printf("�������ַ�\n");
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
////�൱��if(ch >= 'A' && ch <= 'Z') ch=(ch+32) 
//	//	else  ch=ch;
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{	//���д����ʵ�ֶ�������ż�����жϡ�
//	/*	1��	����һ��int���͵ı���x���ñ�����ֵΪ5��
//		2��	ʹ��if��else����x�����жϣ�����������������x�������������������x��ż������*/
//	int  x = 5;
//	if (x % 2 != 0)
//		printf("%d������\n", x);
//	else
//		printf("%d��ż��\n", x);
//	return 0;
//}


//���д����ʵ�ֶԡ�1 + 3 + 5 + 7 + �� + 99������͹��ܡ�
//��ʾ��
//1��ʹ��ѭ�����ʵ����Ȼ��1~99�ı�����
//2���ڱ��������У��жϵ�ǰ���������Ƿ�Ϊ����������Ǿ��ۼӣ����򲻼�
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
	printf("���������ڼ�������\n");
	printf("*******************\n");
	int day = 0;
	scanf("%d", &day);
	printf("*******************\n");
	switch (day)
	{
	case 1:
		printf("����������һ\n");
		break;
	case 2:
		printf("���������ڶ�\n");
		break;
	case 3:
		printf("������������\n");
		break;
	case 4:
		printf("������������\n");
		break;
	case 5:
		printf("������������\n");
		break;
	case 6:
		printf("������������\n");
		break;
	case 7:
		printf("������������\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	printf("*******************\n");
	return 0;
}

//int main()
//{
//	printf("�鿴�ǹ����ջ�����Ϣ��\n");
//	//1-5�ǹ����� 6-7����Ϣ��
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
//		printf("�����ǹ�����\n");
//		break;
//	case 6:
//	case 7:
//		printf("��������Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	printf("*******************\n");
//	return 0;
//}