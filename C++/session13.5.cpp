#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

// Convert string to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    ifstream file("playlist.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Songs containing 'love':\n\n";

    while (getline(file, line)) {
        string lowerLine = toLowerCase(line);

        // Check if "love" exists in the line
        if (lowerLine.find("love") != string::npos) {
            cout << line << endl;
        }
    }

    file.close();
    return 0;
}
