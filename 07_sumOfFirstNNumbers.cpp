#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the summation limit you want: ";
    std::cin>>num;

    //std::cout<<"The Sum of Natural Numbers Till "<<num<<" is "<<((num)*(num+1))/2;
    //Above is a standard Maths formula. It is faster, but we'll avoid that for now.

    long long sum = 0;
    for(int i = 1; i<=num; i++)
    sum+=i;

    std::cout<<"The sum of all natural numbers till "<<num<<" is "<<sum;
    return 0;
}
