# include <iostream>
using namespace std;

int main() {
    
    int waterTemp[5] = {32, 33, 34, 35, 36};

    cout << "Water temperatures: " << endl;
    for (int i = 0; i < 5 ; i++) {
        cout << waterTemp[i] << endl;
    }


    int waterBottles[5] = {10, 20, 30, 40, 50};

    cout << "Water bottles purchased on day 1: " << waterBottles[0] << endl;

    cout << "Water bottles purchased on day 2: " << waterBottles[1] << endl;
    
    return 0;
}