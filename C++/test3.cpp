#include<iostream>
#include<string.h>
 using namespace std;
 
 class Student{
 	private:
 		int age;
 		string name;
 	public:
 		Student(){
		 cout<<"enter age:";
		 cin>>age;
		 cout<<"enter name:";
		 cin>>name;
		 }
		 
		 Student(int a,string n){
		 	
		 	age=a;
		 	name=n;
		 }
 		
 		Student(Student &st){
 			age=st.age;
 			name=st.name;
		 }
 	void print(){
 		
 		cout<<"your age is:"<<age<<endl;
 		cout<<"your name is:"<<name<<endl;
	 }
	 
	 ~Student(){
	 	cout<<"disconstructor over:";
	 }
 };
 
 int main(){
 	
 	Student s;
 	s.print();
 	
 	Student sa(25,"ajit");
 	sa.print();
 	
 	Student sb(sa);
 	sb.print();
 	
 	
 	return 0;
 }
