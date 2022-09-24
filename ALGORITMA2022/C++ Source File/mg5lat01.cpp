#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a: "; cin>>a;
	switch(a){
		case 1: cout<<"satu"; break; //tanpa break akan lanjut sampai bawah (error)
		case 2: cout<<"dua"; break;
		default: cout<<"not 1 or 2";
	}
}
