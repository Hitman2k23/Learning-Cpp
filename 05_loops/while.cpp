#include <iostream>
#include <string>

using namespace std;

int main(){

    int teaCups;
    cout << "Enter the numberes of cups to server: ";
    cin >> teaCups;

    //While loop
    while (teaCups > 0)
    {
        teaCups = teaCups - 1 ;
        cout << "Serving a cup of tea \n" << teaCups << "remaining" << endl;

       // teaCups --;
    }
     
    cout << "All tea cups are served. " << endl;
    return 0;
}