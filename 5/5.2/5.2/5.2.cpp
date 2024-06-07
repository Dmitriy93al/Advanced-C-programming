#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

int main()
{
	std::vector<int> input;

	int value;
	int size;

	std::cout << "[IN]: " << std::endl;
	std::cin >> size;

	for (int i = 0; i < size; i++) {
		std::cin >> value;
		input.push_back(value);
	}

	std::sort(begin(input), end(input));
	input.erase(std::unique(begin(input), end(input)), end(input));
	std::sort(input.begin(), input.end(), std::greater<>());

	std::cout << "[OUT]: " << std::endl;

	for (auto itr = input.begin(); itr != input.end(); ++itr) {
		{
			std::cout << *itr << std::endl;
		}
	}
	return 0;
}