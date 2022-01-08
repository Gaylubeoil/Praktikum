/*TASK 10
Да се напише рекурсивна функция, която намира стойността на функцията на Акерман Ack(m, n), дефинирана за m >= 0 и n >= 0 по следния начин:
Ack(0, n) = n+1
Ack(m, 0) = Ack(m-1, 1), m > 0
Ack(m, n) = Ack(m-1, Ack(m, n-1)), m > 0, n > 0. */
#include <iostream>
int ack(size_t m, size_t n) {
    if (m == 0) {
        return n + 1;
    }
    else if (n == 0) {
        return ack(m - 1, 1);
    }
    else {
        return ack(m - 1, ack(m, n - 1));
    }

}
int main() {
    std::cout << ack(2, 1);
}
