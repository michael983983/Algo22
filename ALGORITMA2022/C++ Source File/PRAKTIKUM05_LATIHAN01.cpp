#include <iostream>
using namespace std;

int main(){
	int uts, UAS, tgs, nilai;
	string nama;
	
	cout<<"Masukkan nama anda: "; cin>>nama;
	cout<<"Nilai tugas: "; cin>>tgs;
	cout<<"Nilai uts: "; cin>>uts;
	cout<<"Nilai UAS: "; cin>>UAS;
	cout<<"-----------------"<<endl;
	
	nilai= (tgs+uts+UAS)/3;
	
	cout<<"Selamat "<<nama<<endl;
	cout<<"Nilai anda (tgs+uts+uas)/3): "<<nilai<<endl; 
	
	switch (nilai){
			case 81 ... 100:
    cout<<"Nilai Huruf: A"<<endl;
    cout<<"Predikat: Sangat Baik";
    break;
			case 61 ... 80:
    cout<<"Nilai Huruf: B"<<endl;
    cout<<"Predikat: Baik";
    break;
			case 41 ... 60:
    cout<<"Nilai Huruf: C"<<endl;
    cout<<"Predikat: Cukup";
    break;
    
  			case 21 ... 40: 
    cout<<"Nilai Huruf: D"<<endl;
    cout<<"Predikat: Buruk";
    break;
 
			case 0 ... 20: 
    cout<<"Nilai Huruf: E"<<endl;
    cout<<"Predikat: Sangat Buruk";
    break;
}
	return 0;
	
  } 

