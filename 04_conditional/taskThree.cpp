#include <iostream>
#include <string>

using namespace std;

int main() {

   int cups;

   cout << "Enter the number of tea cups you want.";
   cin >> cups;
   
   double pricePerCup = 2.5,discount , totalPrice;

   totalPrice = cups * pricePerCup;

   if (cups > 20)
   {
     discount = 0.20;
    
   } else if (cups >= 10 && cups <= 20)
   {
     discount = 0.10;
   } else {
     discount = 0;
   }

   totalPrice = totalPrice - (totalPrice * discount); 
   
    cout << "Total price after discount is: " << totalPrice << endl;
   
    return 0; 
}

//totalPrice -= (totalPrice * discount);

   /*
   int count;
   count = 5
   count = count +1;
   count += 1;
   */