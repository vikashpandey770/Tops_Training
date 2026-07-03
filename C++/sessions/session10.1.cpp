#include<iostream>
#include<string.h>

using namespace std;

int main(){
    
    string first;
    string second;
    cout << "enter your first username:";
    getline(cin, first);
    cout << "enter your second username:";
    getline(cin, second);
    
    if(first==second&&second==first){
    	cout<<"both name are same TRUE"<<endl;
	}
	else{
		cout<<"not same names";
	}
    return 0;    
}
