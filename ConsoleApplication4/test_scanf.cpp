#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int x = scanf("%d%d", &a, &b);
	if (x == 2) {//アドレスを渡す
		//すべて正常に入力された場合
		printf("%d と %d が入力されました。\n", a, b);//データを渡す
	}
	else {
		//どれかは正常に入力されなかった場合
		printf("正常に入力されませんでした。\n");
	}
}
