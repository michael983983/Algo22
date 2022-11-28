#include <iostream>
using namespace std;

void hitungVolumeBalok(double panjang, double lebar, double tinggi) {
	double volume = (panjang * lebar * tinggi);
	cout<<"Volume Balok adalah: "<<volume<<endl;
}

int main(){
	double panjang, lebar, tinggi;
	cout<<"KALKULATOR MENCARI VOLUME BALOK"<<endl;
	cout<<"Masukkan panjang balok: ";cin>>panjang;
	cout<<"Masukkan lebar balok: "; cin>>lebar;
	cout<<"Masukkan tinggi balok: "; cin>>tinggi;
	hitungVolumeBalok(panjang, lebar, tinggi);
	return 0;
}
