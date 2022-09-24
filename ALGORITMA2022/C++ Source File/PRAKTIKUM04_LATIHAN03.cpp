#include <iostream>
using namespace std;

int main(){
	int uts, uas, nilai;
	cout<<"Masukkan nilai uts : "; cin>>uts;
	cout<<"Masukkan nilai uas : "; cin>>uas;
	
	nilai= (uts + uas) / 2;
	cout<<"Nilai kamu : "<<nilai<<"\n";
	
	(nilai>=60) ? (cout<<"lulus") : (cout<<"Tidak lulus");
	return 0;
}
