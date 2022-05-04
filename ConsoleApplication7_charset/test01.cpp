#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#if 1
int main()
{
	(void)_setmode(_fileno(stdout), _O_U8TEXT);
	_putws(L"안녕하세요");//wchar_t 型の文字列
}
#endif
/*
Unicode文字セットとマルチバイト文字セット[Visual Studio C/C++操作, Win32 API]
https://youtu.be/7Alub9nN-rE
ta koko
質問です。c言語で prinft("%s", "안녕하세요"); とすると、
ハングル部分が文字化けします。projectのプロパティで
文字セットをマルチバイトセットにしても、unicodeセッ
トにしても、どっちも文字化けするのですが、unicodeは
全世界の文字に対応しているはずなのに、なぜって思っ
てしまいます。この問題の解決方法をlive動画で扱ってほ
しいです。また、c標準libraryを使う時と、windows api
関数を使う時とで、違うようなので、ここら辺も整理し
てほしいです。wchar_tとかのデータ型も一緒に整理して
ほしいです。この動画でTEXT()やL"" はわかりましたが、
上で言ったような内容がごっちゃまぜになって、整理が
できないです。お願いいたします。
*/
