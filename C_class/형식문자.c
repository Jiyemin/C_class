#include <stdio.h>

int main(void)
{
	//%d ; char , short , tin ( 부호 있는 10진 정수)
	// %d ; long ( 부호 있는 10진 정수 )
	//%lld ; long long ( 부호 있는 10진 정수 )
	//%u ; unsigend int( 부호 없는 10진 정수 )
	//%f ; float ( 10진수 방식의 부동소수점 실수 )
	//%x ; float,double
	//%lf ; long double, double
	//%c ; char , short , int ( 값에 대응하는 문자 )
	//%s ; 문자열
	//%p ; 포인터 주소값
	//%i ; int 출력
	// 구글에: C언어 서식지정자

	long long x = 2200000000;
	printf("값 : %lld\n", x);

	printf("%10d\n", 42); // "% 공백 넓이 숫자 많큼 d"
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d\n", 1);
	printf("%010d", 123456);
	return 0;
}