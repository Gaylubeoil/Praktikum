/*TASK 2
Напишете рекурсивна функция с прототип int reverseNum(int), която обръща цяло число (от дадено число получава ново число, в което цифрите са в обратен ред).
Пример:
reverseNum(1123) => 3211*/
#include <iostream>
int counter(int n) {
	if (n < 10) return 1;
	return 10 * counter(n / 10);
}

int reverseNum(int n) {
	if (n == 0 || n < 10) return n;
	return (n % 10)*counter(n) + reverseNum(n / 10);
}
int main() {
	int n = 123;
	std::cout << reverseNum(n);
	return 0;
}
