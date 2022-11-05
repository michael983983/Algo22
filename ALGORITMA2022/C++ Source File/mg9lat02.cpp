#include <iostream>
using namespace std;

int main(){
	int umur[2000];
	int total = 0, rata;
	
	for (int a=0;a<10;a++){
	cout<<"Masukkan umur: "; cin>>umur[a];
	total = total+umur[a];
	}
	rata = total/10;
	cout<<"rata-rata umur: "<<rata;
}
