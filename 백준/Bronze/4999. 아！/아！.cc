#include <iostream>
#include <string>

int main()
{
    std::string Jeahwan, Doctor;
    std::cin >> Jeahwan;
    std::cin >> Doctor;

    if (Jeahwan.length() >= Doctor.length())
    {
        std::cout << "go";
    }
    else
    {
        std::cout << "no";
    }

    return 0;
}