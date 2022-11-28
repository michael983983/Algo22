#include <iostream>
using namespace std;

string bonus (int tb){
	string bonusanda;
	switch (tb){
	case 50000 ... 150000 : bonusanda = "Masker";
	break;
	case 150001 ... 300000 : bonusanda = "Pouch";
	break;
	case 300001 ... 500000 : bonusanda = "Panci"; 
	break;
	case 500001 ... 1000000 : bonusanda = "Rice Cooker";
	break;
	case 1000001 ... 2000000 : bonusanda = "Cashback 20%";
	break;
	case 2000001 ... 999999999 : bonusanda = "Cashback 25%";
	break;
	default : bonusanda = "Tidak ada Bonus";
	break;
	}
	return bonusanda;
}
int main(){
	float total;
	cout<<"APLIKASI KLAIM BONUS BELANJA ANDA !!!\nHADIAH : MASKER | POUCH | PANCI | RICE COOKER | CASHBACK 20% | CASHBACK 25%"<<endl;
	cout<<"Masukkan Total Belanja Anda: "; cin>>total;
	cout<<"Bonus anda adalah: "<<bonus(total)<<endl;
	cout<<"TERIMA KASIH";
}

