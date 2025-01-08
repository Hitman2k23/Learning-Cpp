#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaTypes[4] = {"Green Tea", "Black Tea", "Oolong Tea", "Chai Tea"};

    for (int i = 0; i < 4; i++)
    {
        if (teaTypes[i] == "Black Tea")
        {
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        cout << "I enjoy drinking " << teaTypes[i] << endl;
        
    }
    
} 