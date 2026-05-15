#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    int copy = num; int counter = 0;
    while(copy>0)
    {
        counter++;
        copy/=10;
    }
    std::cout<<counter;
    return 0;
}