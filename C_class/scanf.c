#include <stdio.h>

int main(void)
{
	//1. 입력할 데이터에 대응하는 자료형
	//2.입력할 데이터가 저장될 메모리 공간 (변수)
	// scanf -> scanf_s

	int num;
	//scanf_s("%d", &num);
	//scanf_s("%d\n", &num); // X
	//scanf_s("%d", &num);
	//printf("\n"); // 줄바꿈을 출력

	//scanf_s("입력 : %d", &num); // X
	printf("입력 :");
	scanf_s("%d", &num);

	int x, y, z, total;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &x ,&y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);

	float fnum;
	printf("실수 입력 :");
	scanf_s("%f", &fnum);
	printf("입력된 값 : %0.2f\n", fnum);

	float scanf_pi;
	printf("원주율 입력 : ");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값 : %.2f", scanf_pi);

	// 실수 float 으로 바꿔주고 %를 f로 다 바꿔준다
	


	return 0;
}