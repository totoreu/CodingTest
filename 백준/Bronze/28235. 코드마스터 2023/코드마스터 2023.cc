#include <iostream>
#include <string>
#include <map>

const std::map<std::string, std::string> MapData{
    {"SONGDO",       "HIGHSCHOOL"},
    {"CODE",         "MASTER"},
    {"2023",         "0611"},
    {"ALGORITHM",    "CONTEST"}
};

int main()
{
    std::string Str;
    std::cin >> Str;

    const auto FindIt = MapData.find(Str);
    std::cout << FindIt->second;

    return 0;
}