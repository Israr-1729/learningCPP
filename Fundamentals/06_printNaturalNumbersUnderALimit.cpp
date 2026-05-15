#include <iostream>
int main()
{
    int num;
    std::cout << "Enter the number till which you wish to print: ";
    std::cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i != num)
            std::cout << i << ", "; // comma if it is not the last number of the sequence.
        else
            std::cout << i; // no comma if it is the last number.
    }
    return 0;
}