#include <iostream>
using namespace std;

bool isEven(int number) {
    return (number % 2) == 0;
}

int main() {
    int number;

    cout << "������� �����: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " - ������ �����" << endl;
    }
    else {
        cout << number << " - �������� �����" << endl;
    }

    return 0;
}