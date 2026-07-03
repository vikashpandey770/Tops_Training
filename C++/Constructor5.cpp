#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	private:
		int roll;
		char name[30];

				public:
					//default constructor.
					Student(){
						
						cout<<"enter your roll no:";
						cin>>roll;
						cout<<"enter your name:";
						cin>>name;
						
					}
					// copy constructor.
					Student(Student &sh){
						roll=sh.roll;
						strcpy(name,sh.name);
					}
					
					void prints(){
						cout<<"your roll no is:"<<roll<<endl;
						cout<<"your name is:"<<name<<endl;
					}
};

int main(){
	Student s1;
	s1.prints();
	
	// copy constructor
	
	cout<<"--------------print of copy constructors------------"<<endl;
	Student s2(s1);
	
	s2.prints();
	
	
	return 0;
}
