#include <iostream>
#include <string>

int main()
{
    int N = 0;
    std::cin >> N;
    
    std::string Numbers;
    std::cin >> Numbers;

    int Sum = 0;
    for(const char& Num : Numbers)
    {
        Sum += Num - '0';
    }
    
    std::cout << Sum;
    
    return 0 ;
}