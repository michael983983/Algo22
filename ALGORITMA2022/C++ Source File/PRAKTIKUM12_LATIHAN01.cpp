#include <iostream>
using namespace std;

float perhitunganbmi(float t, float b){
	float meter, bmi;
	meter= t/100;
	bmi=(b/(meter*meter));
	return bmi;
}

string hasilbmi(float t, float b){
	string golongan;
	if (perhitunganbmi(t, b)<18.5){
	    golongan = " (Kurus)";
	}	else if (perhitunganbmi(t, b)<=24.9){
		golongan = " (Normal)";
	}	else if (perhitunganbmi(t, b)<29.9){
		golongan = " (Overweight)";
	}	else {
		golongan =" (Obesitas)";
	}
	return golongan;
}

float hasilbroca(int jeniskelamin, float t){
	float broca;
	switch(jeniskelamin){
		case 1 : broca= ((t-100)-((t-100)*0.10)); break;
		case 2 : broca= ((t-100)-((t-100)*0.15)); break;
	}
	return broca;
}
int main(){
	int jk;
	float berat, tinggi;
	cout<<"Aplikasi Menghitung Berat Badan Ideal Menggunakan Bahasa C++\n1. Laki-laki\n2. Perempuan";
	cout<<"\nMasukan jenis kelamin 1 atau 2 : ";cin>>jk;
	cout<<"Masukan berat : ";cin>>berat;
	cout<<"Masukan tinggi : ";cin>>tinggi;
	cout<<"\nBMI : "<<perhitunganbmi(tinggi, berat)<<hasilbmi(tinggi, berat);
	
	if (jk==1 || jk==2){
		cout<<"\nBerat badan ideal anda menurut rumus Broca : "<<hasilbroca(jk, tinggi)<<" KG";
	}
	else {
		cout<<"\nERROR";
	}
}
