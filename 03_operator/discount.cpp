#include <iostream>
using namespace std;

int main() {
    int numberOfCups;
    int membershipYears;
    bool qualifiesForDiscount;

    // Input the number of cups the user is buying
    cout << "Enter the number of cups you are buying: ";
    cin >> numberOfCups;

    // Input the number of years the user has been a member
    cout << "Enter the number of years you have been a member: ";
    cin >> membershipYears;

    // Check if the user qualifies for a discount
    if (numberOfCups > 12 || membershipYears > 1) {
        qualifiesForDiscount = true;
        cout << "You are qualifed for discount." << endl;

    } else {
         cout << "You are not qualify for discount." << endl;
    
    } 
       

/*  // Display whether the user qualifies for a discount
    if (qualifiesForDiscount) {
        cout << "Congratulations! You qualify for a discount!" << endl;
    } else {
        cout << "Sorry, you do not qualify for a discount." << endl;
    } */
   

    return 0;
}
