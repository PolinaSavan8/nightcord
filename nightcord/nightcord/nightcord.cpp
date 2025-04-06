#include <iostream>
using namespace std;

int main() {
    int arr[8] = { 3, 7, 2, 9, 5, 7, 1, 7 };
    int target; 

    cout << "Массив: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введите число для поиска: ";
    cin >> target;

    cout << "Индексы, где найдено число " << target << ": ";
    bool found = false;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == target) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "число не найдено";
    }

    return 0;
}