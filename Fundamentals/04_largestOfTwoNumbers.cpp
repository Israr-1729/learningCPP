#include <iostream>
int main()
{
    int num1; int num2;
    std::cout<<"Enter first number: ";
    std::cin>>num1;
    std::cout<<"Enter second number: ";
    std::cin>>num2;
    std::cout<<"The bigger number is "<< ((num1>num2) ? num1:num2);
    return 0;
}