#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number to be checked: \n";
    std::cin>>num;
    int copy = num;
    long long reverse = 0;
    while(copy>0)
    {
        reverse = reverse*10+copy%10;
        copy/=10;
    }
    if(reverse==num)
    std::cout<<num<< " is a palindrome. \n";
    else
    std::cout<<num<< " is not a palindrome. \n";
    return 0;
}