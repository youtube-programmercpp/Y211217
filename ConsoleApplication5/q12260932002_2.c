#include <stdio.h>

int input_string_before_comma(char s[], int n)
{
	int i = 0;
	for (;;) {
		if (i < n) {
			const int ch = getchar();//１文字の入力を受け付ける
			switch (ch) {
			case EOF   :
			case '\n'  :
				//エラー
				return -1;
			case ',':
				//正常
				return i;
			default:
				s[i++] = (char)ch;
				break;
			}
		}
		else
			return -1;//エラー
	}
}
char input_character()
{
	const int ch = getchar();
	switch (ch) {
	case EOF:
	case '\n':
		//エラー
		return '\0';
	default:
		return (char)ch;
	}
}
int 出現した回数(const char* p, const char* end, char ch)
{
	for (int n = 0; ; ) {
		if (p < end) {
			if (*p == ch)
				++n;
			++p;
		}
		else
			return n;
	}
}

int main()
{
	char s[10];//文字配列（Null終端文字列ではなくて）
	const int length = input_string_before_comma(s, sizeof s);
	if (length >= 0) {
		const char ch = input_character();
		if (ch != '\0')
			printf("%d\n", 出現した回数(s, &s[length], ch));
	}
}
