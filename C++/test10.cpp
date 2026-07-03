#include<iostream>
#include<string.h>

using namespace std;

class Men{
	public:
		void ajit(int x){
			cout<<"ajit age is:"<<x<<endl;
		}
		void ajit(string name){
			cout<<"ajit father name:"<<name<<endl;
		}
		void ajit(int x,int y){
			cout<<"sum of:"<<x+y<<endl;
		}
	
};
int main(){
	Men m;
	m.ajit(25);
	m.ajit("ajju");
	m.ajit(10,20);
	
	return 0;
}
