#include<iostream>
#include<string.h>
using namespace std;

int main(){
double product_price;
double discount_percentage;
bool Member;
double finalPrice,total;
cout<<"enter your product price:";
cin>>product_price;
cout<<"enter your discount percentage:";
cin>>discount_percentage;	
//	finalPrice=(product_price*discount_percentage)/100;
finalPrice = product_price * (1.0-(discount_percentage/100));
	total = product_price-finalPrice;
	cout<<"your total less price is:"<<total<<endl;
	cout<<"your final price is:"<<finalPrice;
	return 0;
}
