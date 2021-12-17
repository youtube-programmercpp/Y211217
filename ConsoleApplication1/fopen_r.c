#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* const fp = fopen("input.txt", "r");
	if (fp) {
		int n;
		while (fscanf(fp, "%d", &n) == 1) {
			if (n == 0)
				break;
			else
				printf("n = %d\n", n);
		}
		fclose(fp);
	}
}
