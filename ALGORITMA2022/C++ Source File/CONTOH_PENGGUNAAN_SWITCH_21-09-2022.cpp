#include <iostream>
using namespace std;

int main(){
	char a;
	cout<<"nilai a: "; cin>>a;
	switch(a){
		case 'a': cout<<"satu"; break; //tanpa break akan lanjut sampai bawah (error)
		case 'b': cout<<"dua"; break;
		default: cout<<"not 1 or 2";
	}
}
