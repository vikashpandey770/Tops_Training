#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	private:
		int salary;
		
	public:
	Employee(){
		cout<<"enter your salary:";
		cin>>salary;
	}	
	Employee(int s){
		salary=s;
	}
	
	
	
	void print(){
		cout<<"your salary is :"<<salary<<endl;
	}
};

int main(){
	Employee e;
	e.print();
	
	Employee s1(15000);
	s1.print();
	
	
	return 0;
}
