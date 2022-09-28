#include <iostream>
using namespace std;

int main(){
	
	string menu;
	int jp, h, tb, pil;
	
	cout<<"Warung Goreng"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"1. Nasi Goreng : Rp 15.000"<<endl;
	cout<<"2. Mie Goreng : Rp 15.000"<<endl;
	cout<<"3. Kwetiaw Goreng : Rp 20.000"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Masukkan pilihan anda : "; cin>>pil;
	cout<<"Jumlah Pesanan : "; cin>>jp;
	cout<<"-------------------"<<endl;
	
	if (pil == 1){
		menu = "Nasi Goreng"; h=15000;
	} else if (pil == 2){
		menu = "Mie Goreng"; h=15000;
	} else if (pil == 3){
		menu = "Kwetiau Goreng"; h=20000;
	} else{
		menu = "salah pilih"; h=0;
	}
	cout<<"Menu anda: "<<menu<<endl;
	cout<<"Harga: "<<h<<endl;
	cout<<"jumlah pesan: "<<jp<<endl;
	tb = h * jp;
	cout<<"total bayar: "<<tb<<endl;
	
	return 0;
}
