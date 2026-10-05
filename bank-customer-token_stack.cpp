#include<iostream>
using namespace std;
int main() {

    int stack[5];
    int top = -1;
    cout << "Enter 5 recent customer tokens: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Customer token no. : ";
        cin >> stack[++top];
    }
    cout << "Customer tokens numbers which are recently served in sequence: ";
    while (top != -1) {
        cout << stack[top] << " ";
        top--;
    }
    return 0;     
}
