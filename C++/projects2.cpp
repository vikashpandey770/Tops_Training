#include <iostream>
using namespace std;
int main() {
    int minutes[7] = {0};
    int choice;
    do {
        cout << "Music Listening Logger"<<endl;
        cout << "1. log listening minutes"<<endl;
        cout << "2. view weekly summary"<<endl;
        cout << "3. exit"<<endl;
        cout << "enter your choice:";
        cin>>choice;

        switch (choice) {
            case 1:
                for (int i= 0;i<7;i++) {
                    cout << "Enter minutes for day " << i + 1 << ": ";
                    cin >> minutes[i];
                }
                break;
            case 2: {
                int total = 0;
                cout << "Weekly Summary:"<<endl;
                for (int i = 0; i < 7; i++) {
                    cout << "Day " << i + 1 << ": "
                         << minutes[i] << " minutes"<<endl;
                    total += minutes[i];
                }
                cout<<"Total minutes this week:"
                     << total << endl;
                break;
            }
            case 3:
                cout<<"Exiting program"<<endl;
                break;
            default:
                cout <<"Invalid choice.Try again."<<endl;
        }
    } while(choice !=3);
    return 0;
}
