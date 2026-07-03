#include <iostream>
#include<string.h>
using namespace std;

void increaseFollowersByValue(int followers) {
    followers += 1000;
    cout<<"Inside increaseFollowersByValue:"<<followers<<endl;
}

void increaseFollowersByReference(int &followers) {
    followers += 1000;
    cout << "Inside increaseFollowersByReference: " << followers << endl;
}

int main() {
    int followers=2000;\

    cout<<"Original followers:"<<followers<<endl;

    increaseFollowersByValue(followers);
    cout<<"After increaseFollowersByValue:"<<followers << endl;

    increaseFollowersByReference(followers);
    cout << "After increaseFollowersByReference: "<<followers<<endl;
    return 0;
}
