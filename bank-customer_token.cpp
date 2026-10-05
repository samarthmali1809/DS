#include<iostream>
using namespace std;
int main()
{
     int queue[5];
     int front = -1, rear = -1;
        cout << "Enter 5 customer token numbers: " << endl;
        for(int i=0; i<5; i++)
        {
            cout << "Customer token no. " << i + 1 << ": ";
            cin >> queue[++rear];
            if(front == -1)
                front = 0;
        }
        cout << "Customer token numbers are served as sequence: ";
        while(front <= rear)
        {
            cout << queue[front++] << " ";
        }
        cout << endl;
    return 0;
}