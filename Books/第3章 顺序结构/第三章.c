#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��3.1 ���Ի��Ϸ���ʾ���¶�ת��Ϊ���϶�
//int main()
//{
//	float f, c;	//�������
//	f = 64.0;	//ָ��f��ֵ
//	c = (5.0 / 9) * (f - 32);	//���ù�ʽ����c��ֵ
//	printf("f=%f\nc=%f\n", f, c);	//���c��ֵ
//	return 0;
//}

//��3.3 ����һ����д��ĸ Ҫ����Сд��ĸ���
//int main()
//{
//	char c1, c2;
//	printf("��������Ҫת���Ĵ�д��ĸ\n");
//	scanf("%c", &c1);
//	c2 = (c1 + 32);
//	printf("%c\n", c2);
//	return 0;
//}

//��3.4 ��֪��������������� (��ʽΪ���׹�ʽ)
//#include<math.h>
//int main()
//{
//	double a, b, c,s,area;	//�������
//	//�Ա߳� a,b,c ��ֵ
//	a = 3.67;				
//	b = 5.43;				
//	c = 6.21;				
//	s = (a + b + c) / 2;	//����s
//	area = sqrt(s * (s - a) * (s - b) * (s - c));	//����area
//	printf("%1f\t%1f\t%1f\n", a, b, c);	//������� a,b,c��ֵ
//	printf("area=%1f\n", area);	//������area��ֵ
//	return 0;
//}


//��3.8 �Ⱥ����BOY�����ַ�
//int main()
//{
//	//�����ַ�����������ֵ��Ȼ��ʹ��putchar��������������ַ�������ֵ
//	char a='B',b='O',c='Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}


//��3.10  �������κδ�д��ĸ ����һ����д��ĸ������ת��ΪСд
//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = (c1 + 32);
//	putchar(c2);
//	return 0;
//}