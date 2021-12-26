/*Динамичен масив
Да се напише програма, която работи с някакъв масив от цели числа. За този масив да се направи меню от команди. Командите са следните:
0 - Приключване на програмата и принтиране на масива.
1 - push_back.
Потребителя е попитан за цяло число и след въвеждането му то да се залепи за края на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!

2 - push_front.
Потребителя е попитан за цяло число и след въвеждането му то да се залепи за началото на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!

3 - copy.
Потребителят трябва да въведе нов масив и нашия масив да стане копие на въведения масив.

4 - pop_back.
Изтрива се последния елемент на масива.

5 - pop_front.
Изтрива се първия елемент на масива.

За всяка команда да се напише функция! */

#include <iostream>
const int MAX_LENGTH = 64;
void ListOfCommands() {
    std::cout << "0 - end. \n1 - push_back. \n2 - push_front. \n3 - copy. \n4 - pop_back. \n5 - pop_front. \n6 - display_arr. \nx to exit.\nh for List of commands.\n";
}
bool check(const char* input) {
    const char HELP[5] = "help";
    for (size_t i = 0; i < MAX_LENGTH; i++) {
        if (input[i] == NULL) break;
        else if (input[i] != HELP[i]) return false;
    }
    return true;
}

void end(int* arr, const int* size) {
    for (int i = 0; i < *size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void display(int* arr, const int* size) {
    for (int i = 0; i < *size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void pushBack(int* arr, int* size) {
    std::cout << "Enter a number to glue to the back of the array: ";
    int n;
    std::cin >> n;
    *size += 1;
    arr[*size - 1] = n;
    n = 0;
    std::cout << "Done! \n";
}

void pushFront(int* arr, int* size) {
    std::cout << "Enter a number to glue to the front of the array: ";
    int n, temp;
    std::cin >> n;
    *size += 1;
    arr[*size - 1] = 0;
    for (int i = 0; i < *size; i++)
    {
        arr[*size - 1 - i] = arr[*size - 2 - i];
    }
    arr[0] = n;
    n = 0;
    std::cout << "Done~! \n";
}

void copy(int* arr, int* size) {
    std::cout << "Enter a new size and values of the array: ";
    int newSize;
    std::cin >> newSize;
    int* cpy = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        std::cin >> cpy[i];
    }
    *size = newSize;
    for (int i = 0; i < *size; i++)
    {
        arr[i] = cpy[i];
    }
    std::cout << "Done~! \n";
    delete[]cpy;
}
void popBack(int* arr, int* size) {
    arr[*size] = NULL;
    *size -= 1;
    std::cout << "Done~!\n";
}

void popFront(int* arr, int* size) {
    *size -= 1;
    for (int i = 0; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[*size] = NULL;
    std::cout << "Done~!\n";

}
int main() {
    int size = 0;
    std::cout << "Enter size of the array: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "Input your array: ";
    int i = 0;
    for (; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cin.ignore(1, '\n');

    std::cout << "Type help for list of commands, type anything else to exit: ";
    char entryMessage[MAX_LENGTH]{ NULL };
    std::cin.getline(entryMessage, MAX_LENGTH);
    if (check(entryMessage)) {
        ListOfCommands();
        char choice;
        {
        start:
            std::cin >> choice;
            switch (choice) {
            case '0': end(arr, &size); break;
            case '1': pushBack(arr, &size); goto start;
            case '2': pushFront(arr, &size); goto start;
            case '3': copy(arr, &size); goto start;
            case '4': popBack(arr, &size); goto start;
            case '5': popFront(arr, &size); goto start;
            case '6': display(arr, &size); goto start;
            case 'x': case 'X': break;
            case 'h': case 'H': ListOfCommands(); goto start;
            default: std::cout << "Invalid command!\n"; goto start;
            }
        }
    }

    delete[] arr;
    return 0;
}
