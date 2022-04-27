#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s1[100], s2[100];
	if (scanf("%[A-Z]%[0-9]", s1, s2) == 2) {
		printf("s1 = %s\n", s1);
		printf("s2 = %s\n", s2);
	}
}
