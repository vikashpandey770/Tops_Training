#include <iostream>
#include<string.h>
using namespace std;
int main() {
	
    int likes= 100;    
    int* ptrLikes;     

    ptrLikes = &likes; 

    cout <<"Value of likes:"<<likes<<endl;
    cout << "Value stored in ptrLikes (*ptrLikes): "<<*ptrLikes<<endl;
    cout << "Address stored in ptrLikes: "<< ptrLikes<< endl;

    return 0;
}
