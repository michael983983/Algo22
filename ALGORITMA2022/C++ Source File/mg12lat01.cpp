#include <iostream>
using namespace std;

struct barang {
	string nbrg;
	double harga;
	int jum;
	char jenis;
	double total;
};

int main(){
	barang b[10];
	b[2].jum = 10;
	cout<<b[2].jum;
}
