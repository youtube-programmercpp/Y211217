#include <fstream>
#include <iostream>
int main()
{
	if (std::ifstream file{ R"(..\ConsoleApplication1\input.txt)" }) {
		int n;
		while (file >> n) {
			if (n == 0)
				break;
			else
				std::cout << "n = " << n << '\n';
		}
	}
}
