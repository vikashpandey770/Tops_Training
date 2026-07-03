#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char fullName[30];
    char username[30];

    cout<<"Enter full name:";
    cin>>fullName;
//getline(cin,fullName);
    strcpy(username,fullName);

    if (strlen(username) > 5) {
        username[5] = '\0';
    }

    cout<<"Username:"<<username<<endl;

  	return 0;
}
