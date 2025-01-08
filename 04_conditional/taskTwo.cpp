#include <iostream>
#include <string>

using namespace std;

int main() {

   int timeOfDay;
   cout << "Please enter current time (24 hour format). "<< endl;
   cin >> timeOfDay;

   if (timeOfDay >=8 && timeOfDay <=18 )
   {
    cout << "Shop is open." << endl;
   }else
   {
    cout << "Shop is closed." << endl;
   }
   
   
    
    
    return 0;
}