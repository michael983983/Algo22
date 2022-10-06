#include <iostream>
using namespace std;

int main (){
	
	int pilihan;
	float inci, centi;
	
	cout<<"\t\t\t\t\tKALKULATOR PERHITUNGAN INCHI DAN CENTI"<<endl;
	cout<<"KETIK 1 UNTUK PERHITUNGAN CENTI"<<endl;
	cout<<"KETIK 2 UNTUK PERHITUNGAN INCHI"<<endl;
	cout<<"Masukkan pilihan anda : "; cin>>pilihan;
	
	switch (pilihan){
	
	case 1 : 
	cout<<"Masukkan ukuran inchi "; cin>>inci;
	centi = 2.54*inci;
	cout<<"Ukuran dalam centi " <<centi;
	break;
	
	case 2 :
	cout<<"Masukkan ukuran centi "; cin>>centi;
	inci = centi/2.54;
	cout<<"Ukuran dalam inchi " <<inci;
	break;
	
	default : 
	cout<<"Error";
	}
}
