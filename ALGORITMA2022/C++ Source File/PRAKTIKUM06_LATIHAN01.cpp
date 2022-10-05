#include <iostream>
using namespace std;

int main(){

int i = 0;
do {
	cout<<i<<" ";
	i++;
	{
		if (i == 7) break;
	}
}	while (i < 10);

 cout<<endl<<"---------------------------"<<endl;
 
 int a = 0;
 while (a<10){
 	if (a % 2 == 0){
 		a++;
		continue;
	}
 	cout << a << " ";
	a++;  
 }
return 0;
}
