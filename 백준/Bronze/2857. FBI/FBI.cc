#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> ListFBI;
    for (int i = 0; i < 5; ++i)
    {
        std::string CodeName;
        std::cin >> CodeName;
        ListFBI.emplace_back(CodeName);
    }

    bool Check = false;
    auto iter = ListFBI.begin();
    for (int Index = 1; iter != ListFBI.end(); ++iter, ++Index)
    {
        if (iter->find("FBI") != std::string::npos)
        {
            std::cout << Index << " ";
            Check = true;

        }
    }
    if (!Check)
    {
        std::cout << "HE GOT AWAY!";
    }
        
    return 0;
}