#define	_CRT_SECURE_NO_WARNINGS //Visual Studio �p�̋L�q
#include<stdio.h>
int main(void)
{
	int y;

	printf("Enter the tested year:");
	if (scanf("%d", &y) == 1) {
		//������ y �ɓ��͂��ꂽ

		// y % 4 �Ƃ� y �� 4 �Ŋ������Ƃ��̗]��
		// =  �͑��
		// == ���������ǂ����̔���

		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
			printf("%d is leap year\n", y);
		}

		else {
			printf("%d is not leap year\n", y);
			for (;;) {
				--y;
				if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
					break;
			}
			printf("%d is leap year\n", y);
		}
	}
}
