#include <iostream>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to format Instagram-style follower count
string formatFollowersCount(int count) {

    // Case 1: Less than 1000 ? return number as string
    if (count < 1000) {
      =  return to_string(count);
    }

    // Case 2: Thousands (K format)
    else if (count < 1000000) {
        float value = count / 1000.0;  // convert to thousands

        // Round to 1 decimal place
        value = round(value * 10) / 10;

        return to_string(value).substr(0, to_string(value).find('.') + 2) + "K";
    }

    // Case 3: Millions (M format)
    else {
        float value = count / 1000000.0;  // convert to millions

        // Round to 1 decimal place
        value = round(value * 10) / 10;

        return to_string(value).substr(0, to_string(value).find('.') + 2) + "M";
    }
}

int main() {

    int followers;

    // Input follower count
    cout << "Enter follower count: ";
    cin >> followers;

    // Output formatted result
    cout << "Instagram Followers: "
         << formatFollowersCount(followers) << endl;

    return 0;
}
