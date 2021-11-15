#include <iostream>

int Abs(int);
int Pow(double, int);
int Min(double, int);
int Max(double, int);
int min_of_three(double, int, int);
int max_of_three(double, int, int);
void is_alpha();
void is_digit();

int main()
{
    int number, number1, number2;
    std::cout << "Input number, number1 and number2: ";
    std::cin >> number >> number1 >> number2;
    std::cout << std::endl << "Abs Value of num: " << Abs(number) << std::endl;
    std::cout << "Number to the power of number1: " << Pow(number1, number) << std::endl;
    std::cout << "Smaller number between number and number1: " << Min(number1, number) << std::endl;
    std::cout << "Bigger number between number and number1: " << Max(number1, number) << std::endl;
    std::cout << "Smellest num between number, number1 and number2: " << min_of_three(number1, number, number2) << std::endl;
    std::cout << "Biggest num between number, number1 and number 2: " << max_of_three(number1, number, number2) << std::endl;
    std::cout << "Input char: ";
    is_alpha();
    is_digit();
    return 0;
}

int Abs(int number) {
    number < 0 ? number *= (-1) : number;
    return number;
}
int Pow(double number1, int number) {
    return int(pow(number, number1));
}
int Min(double number1, int number) {
    if (number1 > number) {
        return number;
    }
    else
    {
        return number1;
    }
}
int Max(double number1, int number) {
    if (number1 > number) { return number1; }
    else { return number; }
}
int min_of_three(double number1, int number, int number2) {
    return Min(Min(number1, number), number2);
}
int max_of_three(double number1, int number, int number2) {
    return (Max(number1, number), number2);
}
void is_alpha() {
    char char1;
    std::cin >> char1;
    bool a;
    if ((char1 >= 65 && char1 <= 90) || (char1 >= 97 && char1 <= 122))
    {
        a = true;
    }
    else
    {
        a = false;
    }
    std::cout << "The Char is latin later: " << std::boolalpha << a << std::endl;
}
void is_digit() {
    char char1;
    std::cout << "Enter a second char: ";
    std::cin >> char1;
    bool a;
    if (char1 >= 48 && char1 <= 57)
    {
        a = true;
    }
    else {
        a = false;
    }
    std::cout << std::boolalpha << "The second char is a digit: " <<  a;
}

/*
Задача 1.
Напишете следните функции
Abs() -> намира абсолютната стойност на цяло число
Pow() -> за дадени реално и цяло число връща първото на степен второто
Min() -> за дадени две реални числа, връща по-малкото
Max() -> за дадени две реални числа, връща по-голямото
min_of_three() -> за дадени три реални числа, връща най-малкото, като за целта да се използва функцията Min()
max_of_three() -> за дадени три реални числа, връща най-голямото, като за целта да се използва функцията Max()
is_alpha() -> за даден символ връща истина, ако той е буква от латинската азбука

is_digit() -> за даден символ връща истина, ако той е цифра
*/
