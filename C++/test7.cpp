#include<iostream>
#include<string.h>

using namespace std;

class Parent{
	
	public:
		void print(int x){
			cout<<"X:"<<x<<endl;
		}
		
		void print(int x,int y){
			cout<<"sum of:"<<x+y<<endl;
		}
		
		void print(double a, double b){
			cout<<"multiply:"<<a*b<<endl;
		}
};


int main(){
	
	Parent pa;
	pa.print(10);
	pa.print(15,55);
	pa.print(10.50,55.60);
	return 0;
}
