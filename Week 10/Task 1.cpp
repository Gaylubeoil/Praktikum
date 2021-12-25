/*Task 0
Да се напише функция, която приeма като аргументи две цели числа и разменя стойностите им.*/
#include <iostream>
void swapValue(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << *a << " " << *b;
}

int main() {
    int a = 5, b = 7;
    swapValue(&a, &b);
}
