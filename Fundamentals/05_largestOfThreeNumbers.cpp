#include <iostream>
#include <climits>
int main()
{
    int num1; int num2; int num3;
    std::cout<<"Enter first number: ";
    std::cin>>num1;
    
    std::cout<<"Enter second number: ";
    std::cin>>num2;

    std::cout<<"Enter third number: ";
    std::cin>>num3;

    int max = INT_MIN;

    if(num1>max)
    max = num1;

    if(num2>max)
    max = num2;

    if(num3>max)
    max = num3;

    std::cout<<"The largest of the three numbers is "<<max;

    //std::cout<<"The largest of the three numbers is "<<std::max(num1, std::max(num2, num3));
    return 0;
}