#include <iostream>
#include <string>
#include <bits/stdc++.h>
std::string completeWithZeros(std::string value)
{
    while (value.length() < 5)
    {
        value.append("0");
    }
    reverse(value.begin(), value.end());
    return value;
}
std::string binary(int i)
{
    std::string value = "";
    while (i >= 2)
    {
        value.append(std::to_string(i % 2));
        i /= 2;
    }
    value.append(std::to_string(i));
    return completeWithZeros(value);
}
std::string grayCode(int i)
{
    return binary((i ^ (i >> 1)));
}
std::string decodedGrayCode(int i)
{
    return "0";
}
int main()
{
    /*
    Write a program that displays the normal binary representations, Gray code
    representations, and decoded Gray code values for all 5-bit numbers.
    */

    constexpr int number = 0b11111;

    for (auto i = 0; i <= number; i++)
    {
        std::cout << "Number " << i << " Binary: " << binary(i) << " GrayCode " << grayCode(i) << " DecodedGrayCode " << decodedGrayCode(i) << "\n";
    }
}