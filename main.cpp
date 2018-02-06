/*
salad 2.50
red meat 7.20
yellow young potatos 6.33
drinks 10.5 13.70 9.75

given the input above the program will calculate TOTAL receipt value (2.5+7.2+6.33+10.5+13.7+6.33)
it ignores names
*/

#include <iostream>
#include <sstream>
#include <string>

int main()
{
    double sum = 0;
    std::string line;
    while (std::getline(std::cin, line))
    {
        double price;
        std::string word;
        for (std::istringstream stream(line); stream >> word;){
                std::istringstream check(word);
                if (check >> price) sum += price;
        };
    }
    std::cout << sum << std::endl;
    return 0;
}
