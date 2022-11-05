#include <iostream>

using namespace std;

int main() {
	
	const int B = 3;
	const int K = 4; 
	int angka[B][K]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};

	
	for (int i=0;i<B;i++){
		for (int j=0;j<K;j++){
			cout<<angka[i][j]<<" ";
		}
		cout << endl;
	}
}

