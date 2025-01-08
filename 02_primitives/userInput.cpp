#include <iostream>
#include <string>

using namespace std;

int main() {

    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n" << endl;
    getline(cin, userTea);

    //ask for quantity 
    cout << "How many cups would you like to have in tea? \n "<< endl; 
    cin >> teaQuantity;

    /*cout << teaQuantity;
    cout << userTea; */
    

    cout << "You ordered " << teaQuantity << " cups of tea "
     << userTea << "." << endl;

    return 0;
}