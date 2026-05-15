#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number you wish to check: ";
    std::cin>>num;

    if(num>0)
    std::cout<<"+\n";
    else if(num<0)
    std::cout<<"-\n";
    else
    std::cout<<"0\n";
    return 0;
}