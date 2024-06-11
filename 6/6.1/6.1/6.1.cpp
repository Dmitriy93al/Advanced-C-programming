#include<iostream>
#include<vector>
#include <algorithm>

int main()
{
	std::cout << "[IN]: ";

	std::string new_string = { "1 1 2 5 6 1 2 4" };

	std::vector<int>vec_eraze_duplicates;
	std::cout << new_string << std::endl;


	for (int i = 0; i < new_string.length(); i++) {
		if (new_string[i] != ' ') {
			int value = new_string[i] - '0';
			vec_eraze_duplicates.push_back(value);
		}
	}

	std::sort(begin(vec_eraze_duplicates), end(vec_eraze_duplicates));
	vec_eraze_duplicates.erase(std::unique(begin(vec_eraze_duplicates), end(vec_eraze_duplicates)), end(vec_eraze_duplicates));

	std::cout << "[OUT]: ";

	for (auto itr = vec_eraze_duplicates.begin(); itr != vec_eraze_duplicates.end(); ++itr) {
		{
			std::cout << *itr << " ";
		}
	}

	return 0;
}