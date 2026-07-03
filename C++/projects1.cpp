#include <iostream>
using namespace std;

int main() {
    int minutes[7];
    int total = 0;
    cout << "Music Listening Logger"<<endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter minutes listened on day " << i + 1 << ": ";
        cin >> minutes[i];
        total += minutes[i];
    }

    cout << "Minutes listened each day:"<<endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": " << minutes[i] << " minutes"<<endl;
    }

    cout << "Total minutes listened this week: " << total << endl;

    return 0;
}
