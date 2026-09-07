#include<iostream>
using namespace std;
int main()
{
    int book[10];
    int n = 0;
    int choice;
    int searchId;

    do
    {
       cout << "\n\n ==== Smart Library Menu ====";
       cout << "\n1. Add Book ID";
       cout << "\n2. Display Book IDs";
       cout << "\n3. Search Book ID";
       cout << "\n4. Exit"<<endl;
       cout << "Enter your choice No.: ";
       cin>> choice;

      if (choice == 1)
      {
           cout << "Enter Book ID: ";
           cin >> book[n];
           n++;
           cout << "Book ID added successfully!" << endl;
      }
      else if (choice == 2)
      {
          cout << "\nDisplaying Book IDs:\n" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Book ID: " << book[i] << endl;
            }     
      }
      else if (choice == 3)
      {
          cout << "Enter Book ID to search: ";
          cin >> searchId;
          bool found = false;
          for (int i = 0; i < n; i++)
          {
              if (book[i] == searchId)
              {
                  found = true;
                  break;
              }
          }
          if (found)
          {
              cout << "Book found!" << endl;
          }
          else
          {
              cout << "Book not found!" << endl;
          }
      }
      else if (choice == 4)
      {
          cout << "Thank you for using the Smart Library!" << endl;
      }
      else
      {
          cout << "Invalid choice! Please try again." << endl;
      }
    } while (choice != 4);
    return 0;
}