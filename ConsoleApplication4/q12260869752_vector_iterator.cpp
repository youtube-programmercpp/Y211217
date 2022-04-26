#include <iostream>
#include <string>
#include <vector>
struct fruit {
	std::string namae;
};
int main(void)
{
	std::vector<fruit> fruits;
	fruits.push_back({ "ƒŠƒ“ƒS"   });
	fruits.push_back({ "ƒIƒŒƒ“ƒW" });
	fruits.push_back({ "ƒŒƒ‚ƒ“"   });
	fruits.push_back({ "ƒ‚ƒ‚"     });
	fruits.push_back({ "ƒOƒŒ[ƒv" });

	const std::string ’T‚µ‚½‚¢‰Ê•¨ = "ƒŒƒ‚ƒ“";

	const auto end = fruits.end();
	auto it = fruits.begin();

	for (;;) {
		if (it == end) {
			std::cout << ’T‚µ‚½‚¢‰Ê•¨ << "‚Í‚ ‚è‚Ü‚¹‚ñB\n";
			break;
		}
		else if (it->namae == ’T‚µ‚½‚¢‰Ê•¨) {
			std::cout << ’T‚µ‚½‚¢‰Ê•¨ << "‚Í‚ ‚è‚Ü‚·B\n";
			break;
		}
		else
			++it;
	}
	return 0;
}
