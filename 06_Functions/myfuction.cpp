#include<iostream>
#include<string>
using namespace std;

int checkTemperrature(int temp){

    //int temp = 50;
    cout << "The temperature is " << temp << endl;
    return temp;
}

//Declaration of the function
void serveChai(int cups);

int main(){

    int currentTemp = checkTemperrature(50);
    cout << "The current "<< currentTemp << " is displayed" << endl;

// function call
    serveChai(2);




    return 0;
}

//Defining the function

void serveChai(int cups){
    cout << "Chai is served in " << cups << " cups" << endl;
}