#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int minutes[7] = {0};
    int choice;
    char confirm;

    do {
        cout<<"Music Listening Logger"<<endl;
        cout<<"1.log Listening Minutes"<<endl;
        cout<<"2.view Weekly Summary"<<endl;
        cout<<"3.reset Data"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch (choice) {
        case 1:{
            ofstream file("music_log.txt");
            for (int i = 0; i < 7; i++) {
                cout <<"Enter minutes for day"<< i + 1 << ": ";
                cin>>minutes[i];
                file<<minutes[i] << endl;
        }
            file.close();
            cout << "Data saved successfully!"<<endl;
            break;
        }
        case 2: {
            int total = 0, highest = 0;
            cout << "Weekly Summary"<<endl;
            for (int i = 0; i < 7; i++) {
                cout << "Day " << i + 1 << ": "
                     << minutes[i] << " minutes"<<endl;
                total += minutes[i];
                if (minutes[i] > highest)
                    highest = minutes[i];
            }
            cout << "Total Minutes: " << total << endl;
            cout << "Average Minutes: " << total / 7.0 << endl;
            cout << "Highest Minutes: " << highest << endl;
            break;
        }
        case 3:
            cout << "Are you sure you want to reset all data? (Y/N): ";
            cin >> confirm;
            if (confirm == 'Y' || confirm == 'y') {
                for (int i = 0; i < 7; i++) {
                    minutes[i] = 0;
                }
                ofstream file("music_log.txt", ios::trunc);
                file.close();
                cout << "Data has been reset."<<endl;
            }
            else {
                cout << "Reset cancelled."<<endl;
            }
            break;
        case 4:
            cout << "Exiting program..."<<endl;
            break;
        default:
            cout << "Invalid choice!"<<endl;
        }
    } while (choice != 4);
    return 0;
}
