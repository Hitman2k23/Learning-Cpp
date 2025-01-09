#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += chai[i];
        // total = total + chai[i];

    }
    return total;
}

int main() {
    int chaiCups[5] = {10, 20, 30, 40, 50};
    int totalChai = totalChaiServed(chaiCups, 5
    );
    cout << "Total chai served: " << totalChai << endl;
    return 0;
}
