#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number whose multiplication table you need: ";
    std::cin>>num;
    for(int i = 1; i<11; i++)
    {
        std::cout<<num<<" x "<<i<<"\t=\t"<<num*i<<"\n";
    }
    return 0;
}