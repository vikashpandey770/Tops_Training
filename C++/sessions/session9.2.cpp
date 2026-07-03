#include <iostream>
#include<string.h>
using namespace std;
int main() {
   
    int Ratings[3][5] = {
        {8, 7, 9, 8, 10},  
        {6, 7, 6, 8, 7},   
        {9, 9, 8, 10, 9}   
    };

    cout << "Ratings for Playlist 2:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Day " << (i + 1) << ": " <<Ratings[1][i] << endl;
    }

    return 0;
}
