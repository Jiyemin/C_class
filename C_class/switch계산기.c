#include <stdio.h>

int main(void) 
{
//+,-,*,/
	// ���� : ������ 1�� / ������ 2��
	// ������ Ư��ó��

	int num1, num2;
	char operator;

	printf("�����ڸ� �Է��ϼ���(+,-,*,/) : ");
	scanf_s("%c", &operator,1);

	printf("�� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d %d", num1, &num2);

	switch (operator)
	{
	case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case'-': printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case'*': printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case'/' :
		if (num2 ! = 0) {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
		}
		else {
			printf("0���� ���� �� �����ϴ�.\n");
		}
		break;

	default: printf("��ȿ���� �ʴ� ������");
		break;
	}
	return 0; 
}