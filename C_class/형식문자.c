#include <stdio.h>

int main(void)
{
	//%d ; char , short , tin ( ��ȣ �ִ� 10�� ����)
	// %d ; long ( ��ȣ �ִ� 10�� ���� )
	//%lld ; long long ( ��ȣ �ִ� 10�� ���� )
	//%u ; unsigend int( ��ȣ ���� 10�� ���� )
	//%f ; float ( 10���� ����� �ε��Ҽ��� ���� )
	//%x ; float,double
	//%lf ; long double, double
	//%c ; char , short , int ( ���� �����ϴ� ���� )
	//%s ; ���ڿ�
	//%p ; ������ �ּҰ�
	//%i ; int ���
	// ���ۿ�: C��� ����������

	long long x = 2200000000;
	printf("�� : %lld\n", x);

	printf("%10d\n", 42); // "% ���� ���� ���� ��ŭ d"
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d\n", 1);
	printf("%010d", 123456);
	return 0;
}