/*TASK 6
Напишете рекурсивна функция с прототип void evaluate(const char*), която намира и изпечатва броят на малки и големи букви и броят на цифрите в даденият низ
Пример:
evaluate("3 Doors Down") 
      => Брой малки букви: 7
         Брой големи букви: 2
         Брой цифри: 1*/
#include <iostream>
int digits = 0, smallLetters = 0, capitalLetters = 0;
void evaluate(const char* str) {
    
    if (*str >= 65 && *str <= 90) ++capitalLetters;
    if (*str >= 97 && *str <= 122) ++smallLetters;
    if (*str >= 48 && *str <= 57) ++digits;
    if (*str != '\0')
    evaluate(++str); 
}
int main() {
    evaluate("I really am fat :3");
    std::cout << capitalLetters << ' ' << smallLetters << ' ' << digits << std::endl;
	return 0;
}
