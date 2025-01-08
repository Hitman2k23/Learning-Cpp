#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

/*
 string typeOfTea = "Assamese Tea";
 float pricePerKg = 2800;
 char teaRating = 'B';

cout << " You choose " << typeOfTea << " for you order.\n" << endl;
cout <<" Price of " << typeOfTea << " is " << pricePerKg << " .\n "<< endl;
cout << " Described rating of " << typeOfTea << " is " << teaRating <<"."<< endl;

*/


//assignment two 

//Modify Tea prices creates a program where the user inputs a base price for tea. Use type casting to increase by 10% and display the roundednew price using explicit casting.
/*
 float basePriceOfTea ;

 cout << " Please enter the base value of tea.";
 cin >> basePriceOfTea;
 cout <<" User provide this " << basePriceOfTea << " price of tea. \n " << endl; 
 

 float displayedPrice = (1.1 * (basePriceOfTea)) ;
 int roundedPrice = round(displayedPrice);

cout << "This is total amout " << roundedPrice << " of  your order ." << endl;

*/
//Assignment three.
/*
Favorite tea input writa a program that takes the user favorite's tea as input using getline and also asks how many cups of tea they want using cin.Display the result in a fun message.
*/

string favouriteTea;

cout << "Input your favourite tea: "<< endl;
getline(cin, favouriteTea);

int teaQuantity;
cout << "How many cup of tea do you want? " << endl;
cin >> teaQuantity;

cout << "You ordered " << teaQuantity << " cups of " << favouriteTea << "."<< endl;


return 0;

}