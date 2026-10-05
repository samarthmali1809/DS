#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> servedTokens;
    int nextToken = 1;
    int choice;

    do {
        cout << "\n--- Bank Token System ---\n"
             << "1. Issue a token\n"
             << "2. Display all tokens served\n"
             << "3. Exit\n"
             << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            return 1;
        }

        switch (choice) {
        case 1:
            servedTokens.push_back(nextToken);
            cout << "Token number " << nextToken << " issued and served.\n";
            ++nextToken;
            break;
        case 2:
            if (servedTokens.empty()) {
                cout << "No tokens have been served yet.\n";
            } else {
                cout << "Total tokens served: ";
                for (int token : servedTokens) {
                    cout << token << ' ';
                }
                cout << '\n';
            }
            break;
        case 3:
            cout << "Exiting the bank token system.\n";
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3.\n";
        }
    } while (choice != 3);

    return 0;
}
