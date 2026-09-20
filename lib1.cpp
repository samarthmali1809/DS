#include<iostream>
#include<string>
using namespace std;

int main()
{
    int id1,id2,id3;
    string title1,title2,title3;

//book1
    cout<<"Enter the book1 id: ";
    cin>>id1;
    
    cin.ignore();
    cout<<"Enter the book1 title: ";
    getline(cin,title1);

//book2
    cout<<"Enter the book2 id: ";
    cin>>id2;

    cin.ignore();
    cout<<"Enter the book2 title: ";
    getline(cin,title2);

//book3
    cout<<"Enter the book3 id: ";
    cin>>id3;

    cin.ignore();
    cout<<"Enter the book3 title: ";    
    getline(cin,title3);

// display books
cout<<"\n=======LIBRARAY BOOKS======="<<endl;

cout<<"\n Book1 id: "<<id1;
cout<<"\n Book1 title: "<<title1;

cout<<"\n Book2 id: "<<id2;
cout<<"\n Book2 title: "<<title2;

cout<<"\n Book3 id: "<<id3;
cout<<"\n Book3 title: "<<title3;

return 0;
}