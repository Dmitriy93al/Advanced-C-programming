#pragma once
#include <iostream>

class NumberCounter
{
private:
	int count_ = 0;
	int sum_ = 0;

public:
	NumberCounter() = default;

	void operator ()(int value);
	int get_sum();
	int get_count();
};