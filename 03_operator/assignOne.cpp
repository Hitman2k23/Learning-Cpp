#include <iostream>

using namespace std;

int main() {
    int teabags;

    // Ask the user for the number of tea bags
    cout << "Enter the number of tea bags you have: ";
    cin >> teabags;

    // Check if the number of tea bags is less than 10
    if (teabags < 10) {
        int bagsToAdd = 10 - teabags; // Calculate how many bags to add
        teabags += bagsToAdd;        // Add the bags
        cout << "You had fewer bags. Added " << bagsToAdd << " more to make it 10." << endl;
    }
    // Check if the number of tea bags exceeds 10
    else if (teabags > 10) {
        int bagsToRemove = teabags - 10; // Calculate how many bags to remove
        teabags -= bagsToRemove;        // Remove the extra bags
        cout << "You had too many bags. Removed " << bagsToRemove << " to make it 10." << endl;
    }
    // If the number is already 10
    else {
        cout << "You already have exactly 10 bags." << endl;
    }

    // Display the final count of tea bags
    cout << "Your total number of tea bags is now: " << teabags << endl;

    return 0;
}
