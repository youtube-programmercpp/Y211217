#define	_CRT_SECURE_NO_WARNINGS //Visual Studio �p�̋L�q
#include <stdio.h>
int main()
{
	printf("��������́F");
	char a;
	if (scanf("%c", &a) == 1) {
		switch (a) {
		case 'z':
			printf("a\n");
			break;
		case 'Z': //case ���x��
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
