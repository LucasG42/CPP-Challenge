#include <iostream>

int AbundantNumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int number;

    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        auto resultAbundantSum = AbundantNumber(i);
        if (resultAbundantSum > i)
        {
            std::cout << i << ":" << resultAbundantSum << "\n";
        }
    }
}