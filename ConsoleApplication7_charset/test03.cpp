#include <Windows.h>
extern const wchar_t* const rgpszTextW[];
#if 0
int main()
{
	//CP ... code page
	//SetConsoleOutputCP(CP_UTF8); //不要っぽい
	const auto hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	for (const wchar_t* const* ppszTextW = rgpszTextW; *ppszTextW; ++ppszTextW) {
		WriteConsoleW(hConsoleOutput, *ppszTextW, lstrlenW(*ppszTextW), nullptr, nullptr);
		WriteConsoleW(hConsoleOutput, L"\n", 1, nullptr, nullptr);
	}
}
#endif
