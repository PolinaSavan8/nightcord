#include <iostream>
using namespace std;

bool isEven(int number) {
    return (number % 2) == 0;
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " - четное число" << endl;
    }
    else {
        cout << number << " - нечетное число" << endl;
    }

    return 0;
}