#include <iostream>
#include <string>
#include <vector>
struct fruit {
	std::string namae;
};
int main(void)
{
	std::vector<fruit> fruits;
	fruits.push_back({ "リンゴ"   });
	fruits.push_back({ "オレンジ" });
	fruits.push_back({ "レモン"   });
	fruits.push_back({ "モモ"     });
	fruits.push_back({ "グレープ" });

	const std::string 探したい果物 = "レモン";

	const auto end = fruits.end();
	auto it = fruits.begin();

	for (;;) {
		if (it == end) {
			std::cout << 探したい果物 << "はありません。\n";
			break;
		}
		else if (it->namae == 探したい果物) {
			std::cout << 探したい果物 << "はあります。\n";
			break;
		}
		else
			++it;
	}
	return 0;
}
