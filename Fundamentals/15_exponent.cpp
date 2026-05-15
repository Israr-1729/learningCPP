#include <iostream>
int main()
{
    int base, power;
    std::cout<<"Enter the base: ";
    std::cin>>base;
    std::cout<<"Enter the power: ";
    std::cin>>power;
    long long result = 1;
    for(int i = 1; i<=power; i++)
    {
        result *= base;
    }
    std::cout<<base<<" raised to the power "<<power<<" is "<<result;
    return 0;
}