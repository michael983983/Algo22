#include <iostream>
using namespace std;

int main(){
	
	int pilihan, pesanan, total, totalbayar;
	
	cout<<"Warung Goreng"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"1. Nasi Goreng : Rp 15.000"<<endl;
	cout<<"2. Mie Goreng : Rp 15.000"<<endl;
	cout<<"3. Kwetiaw Goreng : Rp 20.000"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Masukkan pilihan anda : "; cin>>pilihan;
	cout<<"Jumlah Pesanan : "; cin>>pesanan;
	cout<<"-------------------"<<endl;
	
	switch(pilihan){
		case 1 : total = 15000, totalbayar = 15000*pesanan;
		cout<<"Menu anda : Nasi Goreng"<<endl;
		cout<<"Harga : "<<total<<endl;
		cout<<"Jumlah pesan : "<<pesanan<<endl;
		cout<<"Total bayar : "<<totalbayar<<endl;
		break;
		
		case 2 : total = 15000, totalbayar = 15000*pesanan;
		cout<<"Menu anda : Mie Goreng"<<endl;
		cout<<"Harga : "<<total<<endl;
		cout<<"Jumlah pesan : "<<pesanan<<endl;
		cout<<"Total bayar : "<<totalbayar<<endl;
		break;
		
		case 3 :  total = 20000, totalbayar = 20000*pesanan;
		cout<<"Menu anda : Kwetiau Goreng"<<endl;
		cout<<"Harga : "<<total<<endl;
		cout<<"Jumlah pesan : "<<pesanan<<endl;
		cout<<"Total bayar : "<<totalbayar<<endl;
		break;
		
		default: cout<<"error"<<endl;
	}
		
	return 0;
}

