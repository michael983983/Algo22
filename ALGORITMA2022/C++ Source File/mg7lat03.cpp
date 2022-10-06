#include <iostream>
using namespace std;

int main (){

	int nilai;
	string nama;
	
	cout<<"Masukkan nama anda "; cin>>nama;
	cout<<"Masukkan nilai kegantengan anda "; cin>>nilai;
	
	if (nilai >= 85 && nilai <= 100) {
		cout<<"Anda Ganteng"<<endl;
	}
	
	else if (nilai >= 0 && nilai<= 84 ){
		cout<<"Perlu Oplas"<<endl;
	}
	
	else if (nilai < 0){
		cout<<"Salah input"<<endl;
	}
	
	else if (nilai > 100 ) {
		cout<<"Boong"<<endl;
	}
	
	return 0;	
}
