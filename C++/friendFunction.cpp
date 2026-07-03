#include<iostream>
#include<string.h>

using namespace std;

class Karan{
	private:
		int money = 500;
	public:
	friend	void nimesh(Karan k);
	
};

void nimesh(Karan k){
	cout<<"nimesh money:"<<k.money;
}

int main(){
	Karan kk;
	nimesh(kk);
	return 0;
}
