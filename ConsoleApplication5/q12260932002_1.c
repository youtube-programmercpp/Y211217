#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s[10 + 1];
	char ch;
	if (scanf("%[^,],%c", s, &ch) == 2) {
		int �o�������� = 0;
		for (int i = 0; s[i] != '\0'; ++i) {
			if (s[i] == ch)
				++�o��������;
		}
		printf("%d\n", �o��������);
	}
}
