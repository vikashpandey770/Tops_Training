#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct FoodItem {
    string itemName;
    float price;
    float rating;
};

int main() {
    // Array of FoodItem with sample menu data
    FoodItem menu[3] = {
        {"Paneer Butter Masala", 250.50, 4.5},
        {"Veg Biryani", 180.00, 4.2},
        {"Margherita Pizza", 299.99, 4.6}
    };

    cout << "Zomato Menu:\n\n";

    // Display details using loop
    for (int i = 0; i < 3; i++) {
        cout << "Item " << i + 1 << ":\n";
        cout << "Name   : " << menu[i].itemName << endl;
        cout << "Price  : ?" << menu[i].price << endl;
        cout << "Rating : " << menu[i].rating << " / 5" << endl;
        cout << endl;
    }

    return 0;
}
