#include <stdio.h>

int main(void)
{
	//���� 86 / ���� 75 / ���� 86 / ��ȸ 60 / ���� 96
	//����� �Ǽ��� ���
	
	int total = 86 + 75 + 88 + 60 + 96;
	float ayg = total / 5.0;
	printf("¯���� ����� : %0.1f �� �Դϴ�. \n", ayg);


	//���� 64 /���� 56 /���� 87.5 /��ȸ 76.8 /���� 96.9

	float total2 = 64 + 56 + 87.5 + 76.8 + 96.9;
	float ayg2 = total2 / 5.0; //ayg = avg ����
	printf("ö���� ����� : %.2f 0.1�� �Դϴ�. \n", ayg2);
	
	//��� ���� �ֽ�
	
	return 0;
}