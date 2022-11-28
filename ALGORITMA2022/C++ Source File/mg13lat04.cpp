#include <iostream>
using namespace std;

int kali (int a, int b){
	return a*b;
}

int balok(int p, int l, int t){
	return kali(p, l * t);
}		

int main(){
	cout<<balok(70, 9, 10);
}
