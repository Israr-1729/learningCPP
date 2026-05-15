#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number you want to reverse \n";
    std::cin>>num;
    long long reverse = 0;
    int copy = num;
    while(copy!=0)
    {
        reverse = reverse*10 + copy%10;
        copy/=10;
    }
    std::cout<<"The reverse of "<<num<<" is "<<reverse;
    return 0;
}