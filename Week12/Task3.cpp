/*TASK 3
Да се напише рекурсивна функция, която установява дали в записа на естественото число n се съдържа цифрата k.
Пример:
containsDigitIn(1234,3) => 1
containsDigitIn(1234,5) => 0*/
#include <iostream>
int checkForNumber(int num1, int num2) {
	if ((num1 == 0 && num2 == 0) || num1 == num2) return 1;
	if (num1 == 0 && num2 != 0) return 0;
	return num2 == num1 % 10 ? 1 : checkForNumber(num1 / 10, num2);
}
int main() {
	int num1 = 3420, num2 = 3;
	std::cout << checkForNumber(num1, num2);
	return 0;
}
