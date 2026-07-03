#include <iostream>
#include<string.h>

using namespace std;

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int playlist1 = 50;  
    int playlist2 = 80;  
    cout << "Before swapping:" << endl;
    cout << "Playlist 1 songs: " << playlist1 << endl;
    cout << "Playlist 2 songs: " << playlist2 << endl;

 
    swapPlaylistCounts(&playlist1, &playlist2);

    cout << "\nAfter swapping:" << endl;
    cout << "Playlist 1 songs: " << playlist1 << endl;
    cout << "Playlist 2 songs: " << playlist2 << endl;

    return 0;
}
