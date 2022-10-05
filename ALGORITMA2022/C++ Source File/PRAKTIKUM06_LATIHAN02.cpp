#include <iostream>
using namespace std;

int main(){
	char jawab;
	int pil; float a,b,c;
	cout<<"Kalkulator Canggih"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"-------------------------"<<endl;
	
	do {
		
	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	switch (pil){
		case 1:	cout<<"Masukkan angka pertama: "; cin>>a;
			   cout<<"Masukkan angka kedua: "; cin>>b;
			   c = a + b;
			   cout<<"Hasil Penjumlahan: "<<c<<endl;
		break;
		case 2: cout<<"Masukkan angka pertama: "; cin>>a;
			   cout<<"Masukkan angka kedua: "; cin>>b;
			   c = a - b;
			   cout<<"Hasil Pengurangan: "<<c<<endl;
		break;
		case 3: cout<<"Masukkan angka pertama: "; cin>>a;
			   cout<<"Masukkan angka kedua: "; cin>>b;
			   c = a * b;
			   cout<<"Hasil Perkalian: " <<c<<endl;
		break;
		case 4: cout<<"Masukkan angka pertama: "; cin>>a;
			   cout<<"Masukkan angka kedua: "; cin>>b;
			   c = a / b;
			   cout<<"Hasil Pembagian: " <<c<<endl;
		break;
		case 5: int a, b;
				cout<<"Masukkan angka pertama: "; cin>>a;
			   cout<<"Masukkan angka kedua: "; cin>>b;
			   cout<<"Hasil Modulus: " <<a%b<<endl;
		break;
		
		default : cout<<"Error"<<endl;
		break;
		
		}
		
		cout <<endl<< "Coba lagi (Y/T) ? "; cin >> jawab;
	}
		
		while (jawab == 'y' || jawab == 'Y');
	
	return 0; 
}
