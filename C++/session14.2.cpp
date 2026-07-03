#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int num) {
    
    // Step 1: Check remainder when divided by 2
    if (num % 2 == 0) {
        
        // Step 2: If remainder is 0, number is even
        return true;
    } 
    else {
        
        // Step 3: Otherwise, number is odd
        return false;
    }
}

int main() {
    
    int number;

    // Step 4: Take input from user
    cout << "Enter a number: ";
    cin >> number;

    // Step 5: Call function and display result
    if (isEven(number)) {
        cout << number << " is even." << endl;
    } 
    else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
