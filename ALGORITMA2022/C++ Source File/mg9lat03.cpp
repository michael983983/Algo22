#include <iostream>
using namespace std;

int main(){
	int umur[200000];
	int total = 0, rata, jmlData;
	cout<<"Ingin memasukkan berapa data: ";
	cin>>jmlData;
	for (int a=0;a<jmlData;a++){
		cout<<"Masukkan umur: "; cin>>umur[a];
		total = total+umur[a];
	}
	rata = total/jmlData;
	cout<<"rata-rata umur: "<<rata;
}
