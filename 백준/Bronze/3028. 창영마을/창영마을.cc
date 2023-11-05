#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const std::vector<int> A(std::vector<int>& Cup)
{
    std::swap(Cup[0], Cup[1]);
    return Cup;
}

const std::vector<int> B(std::vector<int>& Cup)
{
    std::swap(Cup[1], Cup[2]);
    return Cup;
}

const std::vector<int> C(std::vector<int>& Cup)
{
    std::swap(Cup[0], Cup[2]);
    return Cup;
}

int main()
{
    std::vector<int> Cup{ 1, 0, 0 };
    
    std::string Str;
    std::cin >> Str;

    for (const char& Ch : Str)
    {
        switch (Ch)
        {
        case 'A':
            A(Cup);
            break;
        case 'B':
            B(Cup);
            break;
        case 'C':
            C(Cup);
            break;
        }
    }

    for (int i = 0; i < Cup.size(); ++i)
    {
        if (Cup[i])
        {
            std::cout << i + 1;
        }
    }

    return 0;
}