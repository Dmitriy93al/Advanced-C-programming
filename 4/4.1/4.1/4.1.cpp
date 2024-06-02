#include <iostream>
#include <vector>
#include <string>

template <class T>
T degree(T num)
{
	return num * num;
};

template <>
std::string degree(std::string num)
{
	return num;
};

template <class T>
std::vector<T> degree(std::vector<T> b)
{
	for (size_t i = 0; i < b.size(); i++)
	{
		b.at(i) *= b.at(i);
	};
	return b;
};

void printVector(std::vector<int>* v1)
{
	for (size_t i = 0; i < v1->size(); i++)
	{
		std::cout << v1->at(i) << "\t";
	};
};

int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 5;
	int x = degree(a);

	std::vector<int> b = { -1, 4, 8 };

	std::cout << "[IN]:" << std::endl;
	printVector(&b);

	std::cout << std::endl;

	std::vector<int> y = degree(b);


	std::cout << "[OUT]:" << std::endl;
	printVector(&y);

	return 0;
};