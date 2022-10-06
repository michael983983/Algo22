#include <iostream>
using namespace std;

int main (){

	int nilai;
	string nama;
	
	cout<<"Masukkan nama anda "; cin>>nama;
	cout<<"Masukkan nilai kegantengan anda "; cin>>nilai;
	
	switch (nilai){
	case 85 ... 100 :
		cout<<"Anda Ganteng"<<endl;
		break;
	
	case 0 ... 84 : 
		cout<<"Perlu Oplas"<<endl;
		break;
	
	default:
	cout<<"Error" <<endl;
}
	return 0;	
}
