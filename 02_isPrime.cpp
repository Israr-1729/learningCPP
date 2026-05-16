#include <iostream>
bool isPrime(int num)
{
    if(num==2)
    return true;
    if(num<2 || num%2==0)
    return false;
    for(int i = 3; i*i<=num; i+=2)
    {
        if(num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int num;
    std::cout<<"Enter number to be checked: ";
    std::cin>>num;
    if(isPrime(num))
    std::cout<<num<<" is a prime number";
    else
    std::cout<<num<<" is not a prime number";
}