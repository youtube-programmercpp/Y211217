#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //C����p
bool copy_line(FILE* fpIn, FILE* fpOut)
{
	for (;;) {
		const int ch = fgetc(fpIn);
		switch (ch) {
		case EOF:
			return false;
		case '\n':
			fputc('\n', fpOut);
			return true;
		default:
			fputc(ch, fpOut);
			continue;
		}
	}
}
int main()
{
	FILE* fpIn = fopen(__FILE__, "r");
	if (fpIn) {
		FILE* fpOut = fopen("output.txt", "w");
		if (fpOut) {
			for (int line_number = 1;;) {
				const int ch = fgetc(fpIn);
				if (ch == EOF)
					break;//�I���
				else {
					fprintf(fpOut, "%7d:%c", line_number++, ch);
					if (ch == '\n')
						continue;
					else if (copy_line(fpIn, fpOut))
						continue;
					else
						break;//�I���
				}
			}
			fclose(fpOut);
		}
		else
			fprintf(stderr, "�o�̓t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
		fclose(fpIn);
	}
	else {
		fprintf(stderr, "���̓t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
	}
}
