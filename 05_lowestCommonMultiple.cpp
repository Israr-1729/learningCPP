#include <iostream>

int LCMreturn(int num1, int num2)
{
    int LCM = num1*num2;
    for(int i = std::max(num1, num2); i<=num1*num2; i++)
    {
        if(i%num1==0 && i%num2==0)
        return i;
    }
    return LCM;
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
    std::cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<LCMreturn(num1, num2);
}