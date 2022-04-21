#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen(__FILE__, "r");//ファイルオープン
	if (fp) {
		char s[256 + 1];//終端の Null 文字（'\0'）
		for (int line_number = 1;;++line_number) {
			//１行分読み込む
			if (fgets(s, sizeof s, fp))
				printf("%7d:%s", line_number, s);
			else
				break;
		}
		fclose(fp);
	}
	else {
		printf("ファイルオープン失敗\n");
	}
}
