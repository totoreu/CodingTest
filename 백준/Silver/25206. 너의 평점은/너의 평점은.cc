#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

const std::map<std::string, double> ScoreMap{
    {"A+", 4.5}, {"A0", 4.0},
    {"B+", 3.5}, {"B0", 3.0},
    {"C+", 2.5}, {"C0", 2.0},
    {"D+", 1.5}, {"D0", 1.0},
    {"F", 0.0} 
};

int main()
{
    std::vector<std::pair<std::string, double>> DataList;

    for (size_t i = 0; i < 20; i++)
    {
        std::string Str;
        std::getline(std::cin, Str);

        std::stringstream Ss(Str);

        std::string Name;
        double Score = 0.0;
        std::string StrScore;

        while (Ss >> Name >> Score >> StrScore)
        {
            DataList.emplace_back(StrScore, Score);
        }
    }

    double ScoreSum = 0.0;
    double CreditSum = 0.0;
    for (size_t i = 0; i < DataList.size(); i++)
    {
        auto FindIt = ScoreMap.find(DataList[i].first);
        if (FindIt != ScoreMap.end())
        {
            ScoreSum += FindIt->second * DataList[i].second;
            CreditSum += DataList[i].second;
        }
    }
    
    std::cout << ScoreSum / CreditSum;
    
    return 0;
} 