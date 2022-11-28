#include<iostream>
using namespace std;

int tambah (int bil, int bil2){
	int c;
	c = bil + bil2;
	return c;
//	return bil + bil2;
}

int main(){
	int a, b;
	cout<<"Masukkan a: "; cin>>a;
	cout<<"Masukkan b: "; cin>>b;
	cout<<"Hasil: "<<tambah(a, b)<<endl;
}
