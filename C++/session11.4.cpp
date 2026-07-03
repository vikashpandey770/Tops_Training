#include <iostream>
#include<string.h>

using namespace std;
int main() {
    int order_amounts[5]= {250, 149, 190,100,600};

    int *ptr = order_amounts;

    cout<<"Order Amounts and Their Memory Addresses:\n";

    for (int i = 0; i<5; i++) {
        cout << "Order " << i + 1
             << ": Amount = " << *(ptr + i)
             << ", Address = " << (ptr + i)
             << endl;
    }
    return 0;
}
