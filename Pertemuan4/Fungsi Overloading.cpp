#include<iostream>
#include<string>
using namespace std;

void cetak (double x){
	cout<<"hasil string x ="<<x<<endl;
}

void cetak (string x){
	cout<<"hasil string x ="<<x<<endl;
}

int main(){
	cout<<"fungsi overloading"<<endl;
	cout<<"___pertemuan 4___"<<endl;
	cout<<"___haerul imam___"<<endl;
	cetak(9.9);
	cetak("pemograman");
	cetak(9);
	cetak("semangat");
	cin.get();
	return 0;
}
