#include <iostream>
#include <string>
using namespace std;

struct Bio {
    string description;
    int age;
};

struct InstaProfile {
    string username;
    int followers;
    Bio userBio; 
};

int main() {
    InstaProfile profile = {
        "your_username",
        1250,
        {"CS student and tech enthusiast", 20}
    };

    cout << "Instagram Profile Details:\n";
    cout << "Username    : " << profile.username << endl;
    cout << "Followers   : " << profile.followers << endl;
    cout << "Bio         : " << profile.userBio.description << endl;
    cout << "Age         : " << profile.userBio.age << endl;

    return 0;
}
