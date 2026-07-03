#include <iostream>
using namespace std;

void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) += 100;  
		  }
}

int main() {
    int followers[5] = {1200, 850, 2300, 1500, 950};

    incrementFollowers(followers, 5);

    cout << "Updated follower counts:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Friend " << i + 1 << ": "
             << followers[i] << " followers" << endl;
    }

    return 0;
}
