#include "NumberCounter.h"

void NumberCounter::operator ()(int value)
{
	if (value % 3 == 0)
	{
		sum_ += value;
		count_++;
	};
};

int NumberCounter::get_sum()
{
	count_++;
	std::cout << "[OUT]: get_sum() = " << sum_ << std::endl;
	return sum_;
};

int NumberCounter::get_count()
{
	std::cout << "[OUT]: get_count() = " << count_ << std::endl;
	return count_;
};