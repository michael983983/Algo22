#include <iostream>
using namespace std;

void penjumlahan (){
	int a, b, c;
	cout<<"APLIKASI PENJUMLAHAN"<<endl;
	cout<<"Masukkan angka pertama: "; cin>>a;
	cout<<"Masukkan angka kedua: "; cin>>b;
	c = a+b;
	cout<<"Hasilnya adalah "<<c<<endl<<endl;
}

void perkalian (int a, int b){
	cout<<a*b<<endl;
}

int main(){
	penjumlahan();
	perkalian(2,3);
}
