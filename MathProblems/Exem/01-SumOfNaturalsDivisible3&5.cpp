#include <iostream>
int main()
{
    int limit = 0;
    int sum = 0;
    std::cout << "Enter the limit:\n";
    std::cin >> limit;
    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            sum += i;
    }
    std::cout << "Result: " << sum;
}