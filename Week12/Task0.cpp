/*TASK 0
Напишете рекурсивна функция с прототип int sumOfDigits(int) , която връща като резултат сборът от 
цифрите на цяло положително число с променлива дължина.*/
#include <iostream>
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigits(n / 10);
}
int main()
{
    int num = 68;
    std::cout << sumOfDigits(num);
    return 0;
}
