#include <iostream>
using namespace std;

double calculateAverageSpend(int orders[], int size) {
    int sum=0;
    for (int i=0; i<size;i++) {
        sum += orders[i];
    }
    return static_cast<double>(sum) / size;
}
int main() {
    int dailyOrders[7] = {250, 180, 320, 150, 400, 220, 300};
    double average = calculateAverageSpend(dailyOrders, 7);
    cout << "Average weekly spend: " << average << endl;
    return 0;
}
