#include <iostream>

using namespace std;

void showMenuList() {
	cout << "\nMenu Items:\n";
	cout << "1. Pasta\n";
	cout << "2. Burger\n";
	cout << "3. Salad\n";
	cout << "4. Soup\n";
}

void showRestaurantMenu() {
	int choice;

	cout << "\n1. View menu\n2. Place an order\n3. Exit\nChoose: ";
	cin >> choice;

	if (choice == 1) {
		showMenuList();
	} else if (choice == 2) {
		cout << "Order placed.\n";
	} else if (choice == 3) {
		cout << "Goodbye!\n";
		return;
	} else {
		cout << "Invalid choice. Please try again.\n";
	}

	showRestaurantMenu();
}

int main() {
	showRestaurantMenu();
	return 0;
}
