#include <iostream>
int Mdc(int a, int b)
{
    int r = 0;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    std::cout << "type A and B: ";
    int a, b;
    std::cin >> a >> b;

    std::cout << "Result:" << Mdc(a, b) << "\n";
}