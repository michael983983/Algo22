#include <iostream>
using namespace std;

string kata ="uvers";

string tampil(){
	return kata = "yodi";
}

int main(){
	cout<<"dari fungsi: "<<tampil()<<endl;
	cout<<"dari main: "<<kata<<endl;
	kata = "keren";
	cout<<"dari main: "<<kata<<endl;
	cout<<"dari fungsi: "<<tampil()<<endl;
}
