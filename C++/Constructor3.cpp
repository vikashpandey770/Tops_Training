#include<iostream>
#include<string.h>
using namespace std;


class Vehicle{
	
	private:
		int price;
		string name;
		string model;
		int year;
			
	public:
		
		// constructor creating
		Vehicle(){
			cout<<"enter your bike name:";
			cin>>name;
			cout<<"enter  your model name:";
			cin>>model;
			
			cout<<"enter publish year:";
			cin>>year;
			
			cout<<"enter your bike price:";
			cin>>price;
		}
		
		// parameterize constructor
		Vehicle(int pr,string nm,string mod,int yr){
			
			price=pr;
			model=mod;
			name=nm;
				year=yr;
		
		}
		
		void print(){
			cout<<"enter your bike name:"<<name<<endl;
			cout<<"enter your bike model:"<<model<<endl;
			cout<<"enter your publish year:"<<year<<endl;
			cout<<"enter your bike price:"<<price<<endl;
			
					}
		
};

int main(){
	
	Vehicle v1(65000,"shine","honda",2016);
	v1.print();
	
	
	return 0;
}
