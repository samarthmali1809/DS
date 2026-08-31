#include <iostream>
using namespace std;

int main() {
    int bookId[5];
    int searchId;

    cout << "Enter 5 book ids:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Book ID: ";
        cin >> bookId[i];
    }

    cout << "Enter book id to search: ";
    cin >> searchId;

    for (int i = 0; i < 5; i++) {
        if (bookId[i] == searchId) {
            cout << "Book found" << endl;
            return 0;
        }
    }

    cout << "Book is not found" << endl;
    return 0;
}