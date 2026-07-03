#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file in append mode
    ofstream file("playlist.txt", ios::app);

    // Check if file opened successfully
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Append two new songs
    file << "4. Tum Hi Ho - Arijit Singh" << endl;
    file << "5. Senorita - Shawn Mendes & Camila Cabello" << endl;

    // Close the file
    file.close();

    cout << "Songs added successfully to playlist.txt!" << endl;

    return 0;
}
