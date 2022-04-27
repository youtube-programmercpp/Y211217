#include <stdio.h>

int input_string_before_comma(char s[], int n)
{
	int i = 0;
	for (;;) {
		if (i < n) {
			const int ch = getchar();//�P�����̓��͂��󂯕t����
			switch (ch) {
			case EOF   :
			case '\n'  :
				//�G���[
				return -1;
			case ',':
				//����
				return i;
			default:
				s[i++] = (char)ch;
				break;
			}
		}
		else
			return -1;//�G���[
	}
}
char input_character()
{
	const int ch = getchar();
	switch (ch) {
	case EOF:
	case '\n':
		//�G���[
		return '\0';
	default:
		return (char)ch;
	}
}
int �o��������(const char* p, const char* end, char ch)
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
	char s[10];//�����z��iNull�I�[������ł͂Ȃ��āj
	const int length = input_string_before_comma(s, sizeof s);
	if (length >= 0) {
		const char ch = input_character();
		if (ch != '\0')
			printf("%d\n", �o��������(s, &s[length], ch));
	}
}
