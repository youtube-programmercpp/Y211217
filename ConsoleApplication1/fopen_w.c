#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* const fp1 = fopen("output_A.txt", "w");
	if (fp1) {

		FILE* const fp2 = fopen("output_B.txt", "w");
		if (fp2) {
			fprintf(fp1, "TEST A\n");
			fprintf(fp2, "TEST B\n");
			fclose(fp2);
		}

		fclose(fp1);
	}
}
