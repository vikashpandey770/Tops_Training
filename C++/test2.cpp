#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private :
		int age;
		string name;
		public:
			
		Student(){
			cout<<"enter age:"<<endl;
			cin>>age;
			cout<<"enter name:";
			cin>>name;
		}
		Student(int ag,string n){
		
		age=ag;
		name=n;
		}
		void print(){
			cout<<"enter your age:"<<age<<endl;
			cout<<"enter your name:"<<name;
		}		
};
int main(){
	Student s;
	s.print();
	
	Student s1(25,"vikash");
	s1.print();
	return 0;
}
