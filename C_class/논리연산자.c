#include <stdio.h>

int main(void)
{
	/*
	|| ( or ) : �ǿ������� �ϳ��� true�̸� true��� ������� ��ȯ
	&& ( and ) : �ǿ������� �ϳ��� false�̸� false�� ��ȯ (�Ѵ� true���� ��)
	! (not) : �����������ڷ� �ǿ����ڰ� true�̸� false��� �ݴ밪�� ��ȯ�Ѵ�. (���׿�����)
	�ǿ����ڶ� ? ����������
	*/
	
	int one = 10,tow = 20, three = 30, four = 40;
	int result;

		result = one > tow || tow >= three || three > four;
        // 10 > 20 ? fales
		// 20 >= 30 ? false
		// 30 > 40 ? false
		printf("reuslt : %d\n", result);

		result = one <= tow && tow <= three && three <= four;
		printf("result : %d\n", result);

		result = !(one > tow);
		printf("result : %d", result);




	return 0;
}