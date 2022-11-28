#include<iostream>
using namespace std;

int tambah (int bil, int bil2){
	int c;
	c = bil + bil2;
	return c;
//	return bil + bil2;
}

int main(){
	int a, b, c;
	cout<<"Masukkan a: "; cin>>a;
	cout<<"Masukkan b: "; cin>>b;
	cout<<"Hasil: "<<tambah(a, b)<<endl;
	
	c = tambah (a, b) + 5;
	cout<<"hasil ditambah 5: "<<c<<endl;
}
