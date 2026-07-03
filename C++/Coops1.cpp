#include<iostream>
#include<string>
using namespace std;

class first{
	string s;
	public:
		 	void vikash(){
		 		cout<<"enter your name here:";
		 		cin>>s;
		 		cout<<"your name is:"<<s;
			 }
};
 //void first::vikash(){
//	cout<<"enter your name here:";
//	cin>>s;
//}

int main(){
	
	first vsp;
	vsp.vikash();
	return 0;
}
