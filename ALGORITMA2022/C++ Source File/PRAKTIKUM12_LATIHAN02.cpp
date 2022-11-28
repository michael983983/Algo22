#include <iostream>
using namespace std;

double hitungVolumeBalok(double p, double l, double t) {
	return p *  l * t;
}
int main(){
	double panjang, lebar, tinggi;
	cout<<"Masukkan panjang balok: ";cin>>panjang;
	cout<<"Masukkan lebar balok: "; cin>>lebar;
	cout<<"Masukkan tinggi balok: "; cin>>tinggi;
	cout<<"Hasil volume balok adalah: "<<hitungVolumeBalok(panjang, lebar, tinggi);
}
