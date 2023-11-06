#include <iostream>

inline const int AtSign(const int& A, const int& B)
{
    return (A + B) * (A - B);
}

int main() 
{
    int A = 0, B = 0;
    std::cin >> A >> B;
    std::cout << AtSign(A, B);

    return 0;
}