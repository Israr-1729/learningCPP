#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number whose factorial you wish to calculate: ";
    std::cin>>num;
    long long factorial = 1;
    if(num>20)
    {
    std::cout<<"Factorial of "<<num<<" is too large! \n";
    return 0;
    }
    for(int i = 1; i<=num; i++)
    factorial *= i;
    std::cout<<"The factorial of "<<num<<" is "<<factorial;
    return 0;
}