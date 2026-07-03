#include <iostream>
#include<string.h>
using namespace std;

string getUserInitials(string name) {
    string initials = "";
    initials += toupper(name[0]);

    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {
            initials += toupper(name[i + 1]);
        }
    }
    return initials;
}
int main() {
    cout << getUserInitials("Virat Kohli");
    return 0;
}
