#include <iostream>
#include <string>

int main() 
{
    std::string N;
    std::cin >> N;
    std::cout << (N.front() == N.back()) ? 1 : 0;
    return 0;
}