#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("playlist.txt");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "1. Blinding Lights - The Weeknd" << endl;
    file << "2. Shape of You - Ed Sheeran" << endl;
    file << "3. Believer - Imagine Dragons" << endl;

    file.close();

    cout << "playlist.txt created successfully!" << endl;

    return 0;
}
