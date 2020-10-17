#include<iostream>
using namespace std;

void myF(int &x);

int main(){
	int a =1;
	
	cout<<"a = "<<a<<endl;
	myF(a);
	cout<<"a = "<<a<<endl;
	
	return 0;
	
}
void myF(int &x){
	x++;
	cout<<"x ="<<x<<endl;
}
