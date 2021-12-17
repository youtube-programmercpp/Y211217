#include <Windows.h>
#include <string>
#include <iostream>
int main()
{
	const HANDLE hFile = CreateFileA
	( /*_In_     LPCWSTR               lpFileName           */R"(..\ConsoleApplication1\input.txt)"
	, /*_In_     DWORD                 dwDesiredAccess      */GENERIC_READ
	, /*_In_     DWORD                 dwShareMode          */FILE_SHARE_READ
	, /*_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes */nullptr
	, /*_In_     DWORD                 dwCreationDisposition*/OPEN_EXISTING
	, /*_In_     DWORD                 dwFlagsAndAttributes */0
	, /*_In_opt_ HANDLE                hTemplateFile        */nullptr
	);
	if (hFile == INVALID_HANDLE_VALUE) {
		//é∏îs
	}
	else {
		//ê¨å˜
		LARGE_INTEGER file_size;
		if (GetFileSizeEx(hFile, &file_size)) {
			if (file_size.QuadPart <= ULONG_MAX) {
				const auto cbBuf = static_cast<DWORD>(file_size.QuadPart);
				std::string buf(cbBuf, '\0');
				DWORD cbRead;
				if (ReadFile(hFile, &buf.front(), cbBuf, &cbRead, nullptr))
					std::cout.write(buf.c_str(), cbRead);
			}
		}
		CloseHandle(hFile);
	}
}
