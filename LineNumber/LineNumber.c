#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen(__FILE__, "r");//�t�@�C���I�[�v��
	if (fp) {
		char s[256 + 1];//�I�[�� Null �����i'\0'�j
		for (int line_number = 1;;++line_number) {
			//�P�s���ǂݍ���
			if (fgets(s, sizeof s, fp))
				printf("%7d:%s", line_number, s);
			else
				break;
		}
		fclose(fp);
	}
	else {
		printf("�t�@�C���I�[�v�����s\n");
	}
}
