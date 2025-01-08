#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaOrder;

    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    cout << "You choose" << teaOrder << " for your order. "<< endl;

    if (teaOrder == "Green Tea")
    {
    cout << "You have ordered Green Tea" << endl;
    }else
    {
    cout << "Please give a valid input ." << endl;
    }
    
    
    return 0;
}