#define	_CRT_SECURE_NO_WARNINGS //Visual Studio 用の記述
#include <stdio.h>
int main()
{
	printf("文字を入力：");
	char a;
	if (scanf("%c", &a) == 1) {
		switch (a) {
		case 'z':
			printf("a\n");
			break;
		case 'Z': //case ラベル
			printf("A\n");
			break;
		default:
			if (('a' <= a && a < 'z')
			||  ('A' <= a && a < 'Z')
			)
				printf("%c\n", a + 1);
			break;
		}
	}
}
