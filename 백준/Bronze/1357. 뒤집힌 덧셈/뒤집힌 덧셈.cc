#include <iostream>
#include <string>

int main()
{
    std::string StrX, StrY;
    std::cin >> StrX >> StrY;

    std::reverse(StrX.begin(), StrX.end());
    std::reverse(StrY.begin(), StrY.end());
    
    int Sum = std::stoi(StrX) + std::stoi(StrY);
    std::string StrSum = std::to_string(Sum);
    std::reverse(StrSum.begin(), StrSum.end());

    std::cout << std::stoi(StrSum);

    return 0;
}