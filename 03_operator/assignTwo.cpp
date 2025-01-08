#include <iostream>

using namespace std;

int main() {

    int cups;

    cout << "Enter the number of cups you have: ";
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a Gold badge." << endl;

    } else if ( cups >= 10 && cups <= 20)
    {
        cout << "You will get a Silver badge." << endl;

    } else
    {
        cout << "Sorry, No rewards for you this time.";
    }
    
    
    

    return 0;


}