/*
TASK 9
Да се напише рекурсивна функция, която намира n-тото число от редицата на Фибоначи.

fib(10) => 55*/
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on forever.
#include <iostream>
int fib(int n) {
	static int x = 1;
	static int y = 0;
	static int res = 0;
	if (n == 1) return res;
	res = x + y;
	x = y;
	y = res;
	res = x + y;
	fib(--n);
}
int main() {
	std::cout << fib(20);
	return 0;
}
