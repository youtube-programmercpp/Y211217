#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
int main()
{
	if (std::ifstream file{ __FILE__ }) {
		for (int line_number = 1;;++line_number) {
			std::string s;
			if (std::getline(file, s))
				std::cout << std::setw(7)<< line_number  << ':' << s << '\n';
			else
				break;
		}
	}
	else
		std::cerr << "ファイルオープン失敗\n";
}
