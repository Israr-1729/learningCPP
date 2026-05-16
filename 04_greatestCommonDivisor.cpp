#include <iostream>
int GCDReturn(int num1, int num2)
{
    int GCD = 1;
    for(int i = 2; i<=std::min(num1, num2); i++)
    {
        if(num1%i==0 && num2%i==0)
        GCD = i;
    }
    return GCD;
}
int main()
{
    int num1, num2;
    std::cout<<"Enter first number: ";
    std::cin>>num1;
    std::cout<<"Enter second number: ";
    std::cin>>num2;
    if(num1<1 || num2<1)
    std::cout<<"Enter valid input.";
    else
    std::cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<GCDReturn(num1, num2);
}