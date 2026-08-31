#include <iostream>
using namespace std;

int main() {
    int num[5];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
