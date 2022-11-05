#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi) {
	double luas = (alas * tinggi) / 2;
	cout<<"Luas segitiga adalah: "<<luas<<endl;
}

int main(){
	double alas, tinggi;
	cout<<"Masukkan alas: ";cin>>alas;
	cout<<"Masukkan tinggi: "; cin>>tinggi;
	hitungLuasSegitiga(alas, tinggi);
	return 0;
}
