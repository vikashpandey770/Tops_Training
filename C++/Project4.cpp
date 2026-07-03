#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int minutes[7];
    int total = 0, highest = 0;
    ifstream file("music_log.txt");
    if (!file) {
        cout << "Error: music_log.txt not found!" << endl;
        return 1;
    }
	for (int i = 0; i < 7; i++) {
        file >> minutes[i];
        total += minutes[i];
        if (minutes[i] > highest) {
            highest = minutes[i];
        }
    }
    file.close();
    double average = total / 7.0;
    cout<<"Weekly Music Report"<<endl;
    cout<<"Total Minutes:"<< total <<endl;
    cout<<"Average Minutes:"<< average<<endl;
    cout<<"Highest Minutes:"<< highest<<endl;
    return 0;
}
