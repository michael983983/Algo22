#include <iostream>
using namespace std;

int main(){
char jawab;
int angka;

do {
cout << "Masukkan Angka : ";
cin >> angka;
cout << "Angka " << angka << " adalah ";
cout << ( ( angka % 2 == 1) ? "ganjil" : "genap");
}
while (angka == 3 || angka == 1);

return 0;

}
