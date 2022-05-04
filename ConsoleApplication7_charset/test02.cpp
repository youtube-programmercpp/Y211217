#include <stdio.h>
#include <fcntl.h>
#include <io.h>

extern const wchar_t* const rgpszTextW[] =
{ L"대한민국 大韓民国"
, L"中华人民共和国"
, L"臺灣 台湾"
, L"Україна ウクライナ(ウクライナ語)"
, L"Украина ウクライナ(ロシア語)"
, L"Россия ロシア(ロシア語)"
, L"Росія ロシア(ウクライナ語)"
, L"Japón 日本(スペイン語)"
, L"Japão 日本(ポルトガル語)"
, NULL
};
#if 0
int main()
{
	(void)_setmode(_fileno(stdout), _O_U8TEXT);
	for (const wchar_t*const* ppszTextW = rgpszTextW; *ppszTextW != NULL; ++ppszTextW) {
		_putws(*ppszTextW);
	}
}
#endif
