#include <iostream>
using namespace std;

int main() {
    int arr[8] = { 3, 7, 2, 9, 5, 7, 1, 7 };
    int target; 

    cout << "������: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "������� ����� ��� ������: ";
    cin >> target;

    cout << "�������, ��� ������� ����� " << target << ": ";
    bool found = false;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == target) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "����� �� �������";
    }

    return 0;
}