#include <iostream>
using namespace std;

int main (){
	
	int pil, h, j, t;
	string b;

	cout<<"Pilihan anda \n1.(baju Rp.1000) \n2.(topi Rp.500)\n: "; cin>>pil;
	cout<<"Jumlah : "; cin>>j;
	
	(pil==1) ? (b = "baju", h = 1000) : (b="Topi", h=500);
	
	cout<<"barang anda " <<b<<endl;
	t = h*j;
	cout<<"Total bayar : "<<t<<endl;
}
