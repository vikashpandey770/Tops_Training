#include<iostream>
#include<string.h>
using namespace std;

	
class Student{
	
	private:
		int roll;
		string name;
	public:
		Student(){
			cout<<"enter your roll no:";
			cin>>roll;
			
			cout<<"enter a name:";
			cin>>name;
		}
		
		void print(){
			cout<<"your name is:"<<name<<endl;
			cout<<"your roll no is:"<<roll;
		}
};

int main(){
	
	Student s;
	s.print();
	
	return 0;
	
}
