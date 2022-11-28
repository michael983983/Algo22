#include <iostream>
using namespace std;

struct Mahasiswa {
	string Nama, mataKuliah, Predikat;
	int nilaiangka;
	int Nim;
	char nilaihuruf;
};

int main(){	
	int i;
	Mahasiswa Mhs[3];
	
	for (i=0; i<3; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<"Nim : "; cin>>Mhs[i].Nim;
		cout<<"Nama : "; cin>>Mhs[i].Nama;
		cout<<"Mata Kuliah : "; cin>>Mhs[i].mataKuliah;
		cout<<"Nilai : "; cin>>Mhs[i].nilaiangka;
		cout<<endl;
	
	
	if (Mhs[i].nilaiangka >=81 && Mhs[i].nilaiangka<=100){
		Mhs[i].nilaihuruf = 'A'; Mhs[i].Predikat = "Sangat Baik";
	}
	else if (Mhs[i].nilaiangka >=61&& Mhs[i].nilaiangka<=80){
			Mhs[i].nilaihuruf = 'B'; Mhs[i].Predikat = "Baik";
	}
	else if (Mhs[i].nilaiangka >=41&& Mhs[i].nilaiangka<=60){
			Mhs[i].nilaihuruf = 'C'; Mhs[i].Predikat = "Cukup";
	}
	else if (Mhs[i].nilaiangka >=21&& Mhs[i].nilaiangka<=40){
			Mhs[i].nilaihuruf = 'D'; Mhs[i].Predikat = "Buruk";
	}
	else if (Mhs[i].nilaiangka >=0&& Mhs[i].nilaiangka<=20){
			Mhs[i].nilaihuruf = 'E'; Mhs[i].Predikat = "Sangat Buruk";
	}
			
	}
	
		cout<<"==========BERIKUT DATA YANG TELAH DIINPUT=========="<<endl;
	for (i=0; i<3; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<"Nim : "<<Mhs[i].Nim<<endl;
		cout<<"Nama : "<<Mhs[i].Nama<<endl;
		cout<<"Mata Kuliah : "<<Mhs[i].mataKuliah<<endl;
		cout<<"Nilai : "<<Mhs[i].nilaiangka<<endl;
		cout<<"Nilai Huruf : "<<Mhs[i].nilaihuruf<<endl;
		cout<<"Predikat : "<<Mhs[i].Predikat<<endl;
		cout<<endl;
	}
	return 0;
}
