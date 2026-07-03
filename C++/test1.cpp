#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
	int age;
	string name;
	
	public:
		Student(){
		
	cout<<"enter age :";
	cin>>age;
	cout<<"enter name:";
	cin>>name;
}

void display(){
	cout<<"your age is:"<<age<<endl;
	cout<<"your name is:"<<name<<endl;
}			
};


int main(){
Student s;
s.display();
	
	
	
	return 0;
}
