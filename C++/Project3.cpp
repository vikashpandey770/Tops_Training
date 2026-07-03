#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int minutes[7];
    cout << "Music Listening Logger"<<endl;
    for (int i = 0; i < 7; i++) {
        cout <<"Enter minutes listened on day" << i + 1 << ": ";
        cin >> minutes[i];
    }
ofstream file("music_log.txt");
    if (file.is_open()) {
        for (int i = 0; i < 7; i++) {
            file << "Day " << i + 1 << ": "
                 << minutes[i] << " minutes" << endl;
        }
        file.close();
        cout << "Data saved to music_log.txt successfully!"<<endl;
    } else {
        cout << "Error opening file."<<endl;
    }
    return 0;
}
