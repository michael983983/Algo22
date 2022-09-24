#include <iostream>
using namespace std;

int main(){
	float berat, tinggi, Kalori;
	int usia;
	
	cout<<"Aplikasi menghitung Kebutuhan Kalori Menggunakan Bahasa C++"<<endl;
	cout<<endl;
	
	cout<<"Masukkan berat : ";
	cin>>berat;
	cout<<"Masukkan tinggi : ";
	cin>>tinggi;
	cout<<"Masukkan usia : ";
	cin>>usia;
	
	Kalori= ((88.4+13.4 * berat) + (4.8*tinggi) - (5.68*usia));
	cout<<endl;
	
	cout<<"Kebutuhan Kalorimu : "<<Kalori<<"";
	return 0;
}	
