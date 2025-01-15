#include <stdio.h>

int main(void)
{
	//국어 86 / 영어 75 / 수학 86 / 사회 60 / 과학 96
	//평균은 실수로 출력
	
	int total = 86 + 75 + 88 + 60 + 96;
	float ayg = total / 5.0;
	printf("짱구의 평균은 : %0.1f 점 입니다. \n", ayg);


	//국어 64 /영어 56 /수학 87.5 /사회 76.8 /과학 96.9

	float total2 = 64 + 56 + 87.5 + 76.8 + 96.9;
	float ayg2 = total2 / 5.0; //ayg = avg 같다
	printf("철수의 평균은 : %.2f 0.1점 입니다. \n", ayg2);
	
	//평균 낼수 있슴
	
	return 0;
}