#include <iostream>
#include <string>
#include <vector>
struct fruit {
	std::string namae;
};
int main(void)
{
	std::vector<fruit> fruits;
	fruits.push_back({ "�����S"   });
	fruits.push_back({ "�I�����W" });
	fruits.push_back({ "������"   });
	fruits.push_back({ "����"     });
	fruits.push_back({ "�O���[�v" });

	const std::string �T�������ʕ� = "������";

	const auto end = fruits.end();
	auto it = fruits.begin();

	for (;;) {
		if (it == end) {
			std::cout << �T�������ʕ� << "�͂���܂���B\n";
			break;
		}
		else if (it->namae == �T�������ʕ�) {
			std::cout << �T�������ʕ� << "�͂���܂��B\n";
			break;
		}
		else
			++it;
	}
	return 0;
}
