#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 0)
			break;
		else
			printf("n = %d\n", n);
	}
}
