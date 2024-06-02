#include <iostream>
#include "NumberCounter.h"
#include <vector>

int main()
{
    setlocale(LC_ALL, "Rus");

    NumberCounter oddNum;
    std::vector<int> vec{ 4, 1, 3, 6, 25, 54 };

    for (auto value : vec)
    {
        std::cout << value << "\t";
    };

    std::cout << "\n\n";

    for (auto value : vec)
    {
        oddNum(value);
    };

    oddNum.get_count();
    oddNum.get_sum();


    return 0;
}