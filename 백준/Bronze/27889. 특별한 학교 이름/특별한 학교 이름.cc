#include <iostream>
#include <string>
#include <map>

const std::map<std::string, std::string> SchoolName{
    {"NLCS", "North London Collegiate School"},
    {"BHA", "Branksome Hall Asia"},
    {"KIS", "Korea International School"},
    {"SJA", "St. Johnsbury Academy"}
};

int main()
{
    std::string Acronyms;
    std::cin >> Acronyms;

    auto FindFullName = SchoolName.find(Acronyms);
    std::cout << FindFullName->second;
    
    return 0;
}