#include<iostream>
#include<string.h>

using namespace std;

class Ajit{
	private:
		int age=25;
	public:
	friend void jitu(Ajit a);
			
};

void jitu(Ajit a){
	
	cout<<"jitu age is:"<<a.age;
}

int main(){
	
	Ajit a1;
	jitu(a1);
	
	return 0;
}
