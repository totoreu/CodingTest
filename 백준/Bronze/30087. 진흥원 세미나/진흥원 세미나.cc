#include <iostream>
#include <string>
#include <map>
#include <vector>

const std::map<std::string, std::string> Data{
    {"Algorithm",	            "204"},
    {"DataAnalysis",	        "207"},
    {"ArtificialIntelligence",	"302"},
    {"CyberSecurity",	        "B101"},
    {"Network",	                "303"},
    {"Startup",	                "501"},
    {"TestStrategy",	        "105"}
};

int main()
{
    size_t N;
    std::cin >> N;

    std::vector<std::string> ClassData;
    for (size_t i = 0; i < N; i++)
    {
        std::string Str;
        std::cin >> Str;

        const auto& FindIt = Data.find(Str);
        ClassData.emplace_back(FindIt->second);
    }

    for (const std::string& Number : ClassData)
    {
        std::cout << Number << std::endl;
    }

    

    return 0;
}