#include<iostream>
using namespace std;
int main() {

    int stack[5];
    int top = -1;
    cout << "Enter 5 orders to cancel: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Order no. to cancel: ";
        cin >> stack[++top];
    }
    cout << "Orders canceled: ";
    while (top != -1) {
        cout << stack[top] << " ";
        top--;
    }
    return 0;     
}
