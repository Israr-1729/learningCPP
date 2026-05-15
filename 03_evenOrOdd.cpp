#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number to be checked: ";
    std::cin>>num;
    if(num%2==0)
    std::cout<<num<<" is an even number";
    else
    std::cout<<num<<" is an odd number";
    return 0;
}