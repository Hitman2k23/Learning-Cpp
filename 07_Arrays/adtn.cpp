//Additional exercise 
//Write a function that takes an integer as an argument and returns true if the argument is a prime number, otherwise returns false.
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number = 28;
    bool result = isPrime(number);
    if (result) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}
