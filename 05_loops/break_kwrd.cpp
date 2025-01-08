#include <iostream>
#include <string>
using namespace std;

int main(){

    string response;

    while (true)
    {
        cout << "Do you want more tea (type 'stop' to exit): ";
        getline(cin, response);

        if (response == "stop" || response == "no")
        {
            //exit the loop
            break;
        }

        cout << "Here is your another cup of tea!" << endl;
   }
    
    cout << "you will not get more tea!" << endl;
    return 0;
}