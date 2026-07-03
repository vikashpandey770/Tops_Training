#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string capitalizeFirstLetter(const string& text) {
    if (text.empty()) {
        return text;
    }

    string result = text;
    result[0] = toupper(static_cast<unsigned char>(result[0]));
    return result;
}

int main() {
    cout << capitalizeFirstLetter("bike") << endl;

    return 0;
}
