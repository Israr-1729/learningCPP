#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number: \n";
    std::cin>>num;
    int copy = num;
    int sum = 0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    std::cout<<"The sum of the digits of "<<copy<<" is "<<sum;
    return 0;
}