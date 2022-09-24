#include <iostream>
using namespace std;

#define tinggi 10
#define garis "---------"

int main(){
	
	const double pi = 3.14;
	
	double vol,r;
	
	cout<<"Program mencari volume kerucut"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukkan jari-jari: "; cin>>r;
	
	vol = (pi * r * r * tinggi) / 3;
	
	cout<<"Volume kerucut adalah: "<<vol;
	
	return 0;
}
