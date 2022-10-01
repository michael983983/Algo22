#include <iostream>
using namespace std;

int main()
{
	int angka;
	cobaLagi:
		cout<<"Masukan Angka : ";cin>>angka;
		if (angka!=5) {
			goto cobaLagi;
		}
		return 0;
}
