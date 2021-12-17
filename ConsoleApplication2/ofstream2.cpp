#include <fstream>
int main()
{
	if (std::ofstream file{ "output_cpp_2.txt" }) {
		for (char ch = 'A'; ch <= 'Z'; ++ch)
			file << ch << "\n";
	}
}
