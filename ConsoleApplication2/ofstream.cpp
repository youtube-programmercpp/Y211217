#include <fstream>
int main()
{
	std::ofstream file("output_cpp_2.txt");
	if (file) {
		for (char ch = 'A'; ch <= 'Z'; ++ch)
			file << ch << "\n";
	}
}
