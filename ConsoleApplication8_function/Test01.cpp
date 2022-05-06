#include <stdio.h>
void アスタリスクを１０個出力する()
{
	//終わったら呼び出し元に帰る
	for (int i = 0;i < 10;++i)
		putchar('*');
	putchar('\n');
}
int main()
{
	for (int i = 0;i < 5;++i)
		アスタリスクを１０個出力する();//関数 アスタリスクを１０個出力する を呼び出す
}
