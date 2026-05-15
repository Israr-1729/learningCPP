#include <iostream>
int main()
{
    int num1; //initializing first number
    int num2; //initializing second number
    std::cout<<"Enter first number: ";
    std::cin>>num1;
    std::cout<<"Enter second number: ";
    std::cin>>num2;
    std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<(num1+num2)<<std::endl;
    return 0;
}