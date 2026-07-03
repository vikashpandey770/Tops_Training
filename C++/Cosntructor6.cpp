#include<iostream>
#include<string.h>

using namespace std;

class Car{     // the class
	
	public:// access specifier
		string brand;  // attribute 
		string model;	// attribute
		int year;		// attribute
		
		Car(string x,string y,int z){
			brand=x;
			model=y;
			year=z;
		}
			
};
int main(){
	Car first("hundai","i20",2019);
	
	cout<<first.brand<<" "<<first.model<<" "<<first.year<<endl;
	 
	
	
	return 0;
}
