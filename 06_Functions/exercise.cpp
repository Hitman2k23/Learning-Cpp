#include <iostream>
using namespace std;

// Function to set the smaller of two numbers to 0
void zeroSmaller(int &a, int &b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
}

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Call the zeroSmaller function
    zeroSmaller(num1, num2);

    // Display the results
    cout << "After zeroSmaller function call:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}

