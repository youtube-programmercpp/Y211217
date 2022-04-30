#define	_CRT_SECURE_NO_WARNINGS //Visual Studio 用の記述
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* file; //ファイルのポインタ
	int n/*, i*/; //nはファイルで読み込む整数、iは添字
	file = fopen("nums.txt", "w"); //ファイルを書き込み用にオープン
	if (file == NULL) { //オープンに失敗した場合
		printf("ファイルを開けません"); //エラーメッセージを出して
		exit(1); //異常終了
	}
	fprintf(file, "10,3,7,8\n");
	fclose(file); //読み込み用のファイルをクローズ
	file = fopen("nums.txt", "r"); //ファイルを読み込み用にオープン
	if (file == NULL) { //オープンに失敗した場合
		printf("ファイルを開けません");
		exit(1);
	}
	//ファイルのデータを読み込む
	n = 0;
	int sum = 0;
	for (;;) {
		const int ch = fgetc(file);
		if ('0' <= ch && ch <= '9') {
			n *= 10;//前の桁までをまとめて 10 倍
			n += ch - '0';//一桁分の数字を数値にして n に加える
		}
		else if (ch == ',') {
			printf("%d\n", n);
			sum += n;
			n = 0;
		}
		else if (ch == '\n') {
			printf("%d\n", n);
			sum += n;
			break;
		}
	}
	printf("----------\n");
	printf("合計：%d\n", sum);
	fclose(file); //書き込み用のファイルをクローズ
}
