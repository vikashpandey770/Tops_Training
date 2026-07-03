#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open file in read mode
    ifstream file("playlist.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Songs in playlist.txt:\n\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}
