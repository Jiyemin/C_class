#include <stdio.h>
int main(void)
{


	//10 10.0 �� ��������� �ȴ�.

	long long max_number = 2200000000;
	printf("%u \n", max_number);

	int num1 = 1;
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(short));
	//���ڰ� Ŭ�� long long�� ����ϰ� printf�� ���� �ۼ�Ʈ�� lld ���

	return 0;
}