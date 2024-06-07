#include <iostream>
#include <string>
#include <map>
#include <set>

template<class T>
void printM(const T& m0, const std::string* letters)
{
    std::cout << "[IN] " << * letters << std::endl;
    std::cout << "[OUT]: " << std::endl;
    for (const auto& m : m0)
    {
        std::cout << m.second << ": " << m.first << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");

    size_t numberOfRepetitions = 0;

    std::string letters = "Hello world!!";

    std::multimap<size_t, char, std::greater<size_t>> m1;

    std::set<char> s1;

    for (size_t i = 0; i < letters.length(); i++) {
        s1.insert(letters[i]);
    }

    for (const auto& i : s1) {
        numberOfRepetitions = std::count(letters.begin(), letters.end(), i);
        m1.emplace(numberOfRepetitions, i);
    }
    printM(m1, &letters);

    return 0;
}