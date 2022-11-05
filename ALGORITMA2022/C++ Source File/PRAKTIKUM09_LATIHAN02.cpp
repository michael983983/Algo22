#include <iostream>
using namespace std;


int main (){
	int A[3][4],B[3][4],C[3][4];
	int i, j;
	
	cout<<"APLIKASI PENJUMLAHAN DUA BUAH MATRIKS 3X4"<<endl;
	
	cout<<"Input Matriks A"<<endl;
	for(i=0; i<3; i++)
		for(j=0; j<4; j++){
		cout<<"Matrik A["<<i<<","<<j<<"] : "; cin>>A[i][j];
	}
	cout<<endl;
	
	cout<<"Input Matriks B"<<endl;
	for(i=0; i<3; i++)
		for(j=0; j<4; j++){
		cout<<"Matrik B["<<i<<","<<j<<"] : "; cin>>B[i][j];
	}
		
	for(i=0; i<3; i++)
	for(j=0; j<4; j++)
	
	C[i][j]=A[i][j]+B[i][j];
	
	cout<<endl;
	
		cout<<"HASIL PENJUMLAHAN MATRIKS"<<endl;
	
	for(i=0; i<3; i++){
	for(j=0; j<4; j++){
	cout<< C[i][j]<<" ";
	}
	cout<<endl;
	
	}
	return 0;
} 
