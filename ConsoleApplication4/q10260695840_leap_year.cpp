#define	_CRT_SECURE_NO_WARNINGS //Visual Studio 用の記述
#include<stdio.h>
int main(void)
{
	int y;

	printf("Enter the tested year:");
	if (scanf("%d", &y) == 1) {
		//正しく y に入力された

		// y % 4 とは y を 4 で割ったときの余り
		// =  は代入
		// == 等しいかどうかの判定

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
