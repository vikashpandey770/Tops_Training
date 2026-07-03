#include<iostream>
#include<string.h>
using namespace std;

class Student{
	int age;
	string name;
	
	public:
		Student(){
			cout<<"enter your age:";
			cin>>age;
			
			cout<<"enter your name:";
			cin>>name;
			
			cout<<"your age is:"<<age<<endl;
			cout<<"your name is:"<<name;
			
		}
		
};
int main(){
	Student s;
	
	

	return 0;
}
