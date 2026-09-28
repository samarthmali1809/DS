#include <iostream>
using namespace std;

int main() {
             int queue[5];
             int front = 0; 
             int rear = 0;
            cout << "Enter 5 orders: " << endl;
             {
    for (int i = 0; i < 5; i++) {
        cout << "Order no. ";
        cin >> queue[rear];
        rear++;
    }
    cout << "Orders in the queue: ";
    while (front < rear) {
        cout << queue[front] << " ";
        front++;
    }
}
       return 0;
}