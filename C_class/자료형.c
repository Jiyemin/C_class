#include <stdio.h>
int main(void)
{


	//10 10.0 은 구분해줘야 된다.

	long long max_number = 2200000000;
	printf("%u \n", max_number);

	int num1 = 1;
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(short));
	//숫자가 클때 long long을 사용하고 printf에 들어가는 퍼센트는 lld 사용

	return 0;
}