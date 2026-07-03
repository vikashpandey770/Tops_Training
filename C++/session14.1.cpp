#include <iostream>
using namespace std;

int main() {
    string items[] = {"Burger", "Pizza", "Fries"};
    int prices[] = {120, 250, 90};
    int total = 0;

    for (int i = 0; i < 3; i++) {
        total += prices[i];
    }
    cout << "Total price is: " << total << endl;
    return 0;
}
