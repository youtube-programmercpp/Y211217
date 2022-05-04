#include <Windows.h>
extern const wchar_t* const rgpszTextW[];
#include <sstream>
int main()
{
	std::wostringstream ostm;
	for (const wchar_t* const* ppszTextW = rgpszTextW; *ppszTextW; ++ppszTextW) {
		ostm << *ppszTextW << '\n';
	}
	const auto s = ostm.str();
	if (const auto cchWideChar = s.length()) {
		//MessageBoxW(nullptr, s.c_str(), L"èàóùåãâ ", 0);

		std::string lpMultiByteStr(2 * cchWideChar, '\0');
		lpMultiByteStr.resize(WideCharToMultiByte
		( /*_In_                                           UINT   CodePage         */CP_ACP
		, /*_In_                                           DWORD  dwFlags          */0
		, /*_In_NLS_string_(cchWideChar)                   LPCWCH lpWideCharStr    */s.c_str()
		, /*_In_                                           int    cchWideChar      */static_cast<int>(cchWideChar)
		, /*_Out_writes_bytes_to_opt_(cbMultiByte, return) LPSTR  lpMultiByteStr   */&lpMultiByteStr.front()
		, /*_In_                                           int    cbMultiByte      */static_cast<int>(lpMultiByteStr.size())
		, /*_In_opt_                                       LPCCH  lpDefaultChar    */nullptr
		, /*_Out_opt_                                      LPBOOL lpUsedDefaultChar*/nullptr
		));
		MessageBoxA(nullptr, lpMultiByteStr.c_str(), "èàóùåãâ ", 0);

	}

}
