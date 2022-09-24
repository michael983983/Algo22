#include <iostream>
using namespace std;

int main(){
	int jk;
	float berat, tinggi, bmi, broca,meter;
	
	cout<<"Aplikasi Menghitung Berat Badan Ideal Menggunakan Bahasa C++"<<endl;
	cout<<endl;
	
	cout<<"1. Laki-laki"<<endl;
	cout<<"2. Perempuan"<<endl;
	
	cout<<"Masukan jenis kelamin 1 atau 2 : ";
	cin>>jk;
	cout<<"Masukan berat : ";
	cin>>berat;
	cout<<"Masukan tinggi : ";
	cin>>tinggi;
	
	meter=tinggi/100;
	
	bmi=(berat/(meter*meter));
	
	cout<<endl;
	cout<<"BMI : "<<bmi<<" ";
	
	if (bmi<18.5){
	cout<<"(Kurus)"<<endl;
	}	else if (bmi<=24.9){
		cout<<"(Normal)"<<endl;
	}		else if (bmi<29.9){
				cout<<"(Overweight)"<<endl;
	}				else {
					cout<<"(Obesitas)"<<endl;
	}
	
	switch(jk){
		case 1 : broca=((tinggi-100)-((tinggi-100)*0.10)); break;
		case 2 : broca=((tinggi-100)-((tinggi-100)*0.15)); break;
		default : broca=0;
	}
	
	if (jk==1 or jk==2){
		int hasil = (int)broca;
		cout<<"Berat badan ideal anda menurut rumus Broca : "<<hasil<<" KG"<<endl;
	}
}
