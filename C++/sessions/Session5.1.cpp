#include<iostream>
#include<string.h>
using namespace std;
int main(){
int itemPrice,itemPrice2,price;
int quantity;

cout<<"enter your item price:";
cin>>itemPrice;
cout<<"enter your item price 2:";
cin>>itemPrice2;
cout<<"enter your item quantity:";
cin>>quantity;
	
	cout<<"------- TOTAL BILL-------"<<endl;
	
	price=(itemPrice+itemPrice2);

	cout<<"your total item price is:"<<price<<endl;
	cout<<"your total quantity is:"<<quantity;
	return 0;
}
