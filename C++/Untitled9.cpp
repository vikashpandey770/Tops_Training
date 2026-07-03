#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hours;
    int minutes;
};


struct MovieShow {
    string movie;
    int screen;
    Time showTime;   
};

int main() {
    MovieShow show = {
        "Avengers: Endgame",
        3,
        {18, 45}  
    };

    cout << "Movie: " << show.movie
         << ", Screen: " << show.screen
         << ", Time: ";

    if (show.showTime.hours < 10) cout << "0";
    cout << show.showTime.hours << ":";

    if (show.showTime.minutes < 10) cout << "0";
    cout << show.showTime.minutes << endl;

    return 0;
}
