#include <iostream>
#include <string>
#include <vector>

const std::vector<std::string> Commitments{
    {"Never gonna give you up"},
    {"Never gonna let you down"},
    {"Never gonna run around and desert you"},
    {"Never gonna make you cry"},
    {"Never gonna say goodbye"},
    {"Never gonna tell a lie and hurt you"},
    {"Never gonna stop"}
};

int main()
{
    size_t N = 0;
    std::cin >> N;
    std::cin.ignore();

    std::vector<std::string> StrArray;
    for (size_t i = 0; i < N; i++)
    {
        std::string Str;
        std::getline(std::cin, Str);

        StrArray.emplace_back(Str);
    }

    for(const std::string& Str : StrArray)
    {
        const auto FindIt = std::find(Commitments.begin(), Commitments.end(), Str);
        if (FindIt == Commitments.end())
        {
            std::cout << "Yes";
            return 0;
        }
    }
    std::cout << "No";

    return 0;
}