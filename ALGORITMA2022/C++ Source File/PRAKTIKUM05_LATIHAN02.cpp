#include <iostream>
using namespace std;

int main(){
	string nm;
	int jn, inap, total, hk;
	char srp;
	
	
	cout<<"Hotel Bahagia"<<endl;
	cout<<"-------------------"<<endl;
	
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"-------------------"<<endl;
	
	cout<<"Masukkan nama anda: ";cin>>nm;
	cout<<"Masukkan jenis kamar (1-4): ";cin>>jn;
	cout<<"Lama inap: ";cin>>inap;
	cout<<"Dengan sarapan (y/n) 50rb/hr: ";cin>>srp;
	cout<<"-------------------"<<endl;
	
	cout<<"Terima kasih ";cout<<nm<<endl;

	switch (jn){
			case 1: hk = 1000000;
		cout<<"Kamar anda VVIP"<<endl;
		break;
		
		 	case 2: hk = 750000;
		cout<<"Kamar anda VIP"<<endl;
		break;
		
			case 3: hk = 500000;
		cout<<"Kamar anda Standard"<<endl;
		break;
		
			case 4: hk = 250000;
		cout<<"Kamar anda Melati"<<endl;
		break;
	}
	
	switch (srp){
			case 'y': total = (hk*inap)+(inap*50000);
		cout<<"Lama menginap "<<inap<<" malam dengan sarapan"<<endl;
		cout<<"Total bayar: "<<total<<endl;
		break;
			case 'n': total = (hk*inap);
		cout<<"Lama menginap "<<inap<<" malam dengan tidak sarapan"<<endl;
		cout<<"Total bayar: "<<total<<endl;
		break;	
	}
	
	return 0;
}	
