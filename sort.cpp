#include <iostream>
using namespace std;

int main() {
    int book[5];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> book[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (book[j] > book[j + 1]) {
                int temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << book[i] << " ";
    }
    cout << endl;

    return 0;
}
