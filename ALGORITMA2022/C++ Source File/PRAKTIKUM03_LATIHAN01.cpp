#include <iostream>

using namespace std;

int main()
{
    float r;
    float t;
    float v;
    float jari;
   
    cout<<"Aplikasi Menghitung Volume Kerucut";
    cout<<"\n\dengan menggunakan bahasa C++";
    cout<<"\n\nMasukkan nilai jari-jari : "; cin>>r;
   
    cout<<"\n\nMasukkan nilai tinggi\t : "; cin>>t;
    jari = r*r;
   
    v = (3.14 * jari * t)/3;
    cout<<"\n\nVolume kerucut adalah "; cout<<v; cout<<" cm3.";
    return 0;
}
