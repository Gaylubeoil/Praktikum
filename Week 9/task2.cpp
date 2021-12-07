// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
const int sizea = 64, sizeb = 64;
bool MatchingElements(char arra[sizea], char arrb[sizeb]) {
    for (int i = 0; i < sizea; i++)
    {
        return(arra[i] + 49 == arrb[i]) ? true : false;
    }
}
int main()
{
    char a[sizeb] = { '0', '1', '2', '3', '4', '5', '6','7','8', '9' };
    char b[sizea] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    for (int i = 0; i < sizea; i++)
    {
        std::cout << "Enter Array[" << i << "]: ";
        std::cin >> a[i];
    }
    for (int i = 0; i < sizeb; i++)
    {
        std::cout << "Enter Array[" << i << "]: ";
        std::cin >> b[i];
    }
    std::cout << std::endl;
    std::cout << MatchingElements(a, b);
    return 0;
}

