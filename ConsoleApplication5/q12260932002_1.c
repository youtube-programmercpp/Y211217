#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s[10 + 1];
	char ch;
	if (scanf("%[^,],%c", s, &ch) == 2) {
		int oŒ»‚µ‚½‰ñ” = 0;
		for (int i = 0; s[i] != '\0'; ++i) {
			if (s[i] == ch)
				++oŒ»‚µ‚½‰ñ”;
		}
		printf("%d\n", oŒ»‚µ‚½‰ñ”);
	}
}
