/*TASK 4
Напишете рекурсивна функция int factorial(int) , която пресмята факториел от дадено цяло число.
Пример:
factorial(5) => 120*/
#include <iostream>
int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return (n + 1) * factorial(--n);
}
int main() {
	int n = 5;
	std::cout << factorial(n);
	return 0;
}
