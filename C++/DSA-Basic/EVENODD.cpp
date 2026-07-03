#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n;
	cout<<"enter a number:";
	cin>>n;
	
	if(n%2==0){
		cout<<"EVEN: "<<n<<endl;
	}
	else{
		cout<<"ODD"<<n;
	}
}
