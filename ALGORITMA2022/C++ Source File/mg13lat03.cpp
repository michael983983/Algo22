#include <iostream>
using namespace std;

string bonus (int tb){
	string bonusanda;
	switch (tb){
	case 50000 ... 150000 : bonusanda = "Sendok";
	break;
	case 150001 ... 300000 : bonusanda = "Botol";
	break;
	case 300001 ... 500000 : bonusanda = "Panci"; 
	break;
	default : bonusanda = "Tidak ada Bonus";
	break;
	}
	return bonusanda;
}

int main(){
	float total;
	cout<<"Masukkan Total Belanja Anda: "; cin>>total;
	cout<<"Bonus anda adalah: "<<bonus(total);
}
