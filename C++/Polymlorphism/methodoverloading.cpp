#include<iostream>
#include<string.h>

using namespace std;

class Father{
	public:
		void fix(int x){
			cout<<"enter the x value:"<<x<<endl;
			
		}
		void fix(float a,float b){
			cout<<"enter the two float value and multiplications:"<<a*b<<endl;
		}
		
			void fix(int y,int z){
			cout<<"enter the  two sum value:"<<y+z<<endl;
		}
		void fix(string s){
			cout<<"name is:"<<s<<endl;
		}
	
	
};

int main(){
	
	Father f;
	f.fix(10);
	f.fix(15,5);
	f.fix(5,40);
	f.fix("vikash");
	return 0;
}
