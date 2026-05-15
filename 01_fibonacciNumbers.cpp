#include <iostream>
#include <vector>
int main()
{
    int num;
    std::cout<<"Enter the number of elements you wish to print \n";
    std::cin>>num;
    std::vector<int> Fibonacci(num);
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    for(int i = 2; i<num; i++)
    {
        Fibonacci[i] = Fibonacci[i-1]+Fibonacci[i-2];
    }
    for(int i = 0; i<num; i++)
    {
        if(i!=num-1)
        std::cout<<Fibonacci[i]<<", ";
        else
        std::cout<<Fibonacci[i];
    }
    return 0;
}