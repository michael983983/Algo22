#include <iostream>
using namespace std;

struct iQIYI {
	string langganan, nama;
    char tanya;
    int pil, bayar, pin_biasa, beliberapa, hargatotal;
    string mohon_di_tunggu[6]={"Processing.", ".", "Done","1","2","3"};
};
    void delay( int a){
    int add;
    int time;
    int i;

    time= a * 10000000;

    for ( i = 0; i < time; i++)
    {
        add*=i;
        add++;
        add++;
    }
    
}
 void MohonDitunggu(){
    iQIYI tunggu;
    cout << tunggu.mohon_di_tunggu[0] ;
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    system("cls");
    cout << tunggu.mohon_di_tunggu[0] ;
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    system("cls");
    cout << tunggu.mohon_di_tunggu[0];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    cout << tunggu.mohon_di_tunggu[1];
    delay(10);
    system("cls");
    cout << tunggu.mohon_di_tunggu[2];
    delay(30);

}
	void pembuka(){
    system("cls");
	cout<<"============================= Selamat Datang Di Langganan VIP iQIYI =============================\n";
    cout<<"---------------------------------------------------------------------\n";
    cout<<"|              PAKET LANGGANAN iQIYI VIP                            |\n";
    cout<<"|    ===============================================                |\n";
    cout<<"|    1. Standard Monthly Subscription   (Rp 39.000)                 |\n";
    cout<<"|    2. Standard Quarterly Subscription (Rp 109.000)                |\n";
    cout<<"|    3. Standard Yearly Subscription    (Rp 399.000)                |\n";
    cout<<"|    4. Basic Weekly Subscription       (Rp 10.000)                 |\n";
    cout<<"|    5. Basic Monthly Subscription      (Rp 19.000)                 |\n";
    cout<<"|    6. Premium Monthly Subscription    (Rp 59.000)                 |\n";
    cout<<"|    7. Premium Yearly Subscription     (Rp 599.000)                |\n";
    cout<<"---------------------------------------------------------------------\n\n";
}

	void pemilihan(){
	ulang:
	iQIYI vip;
	cout<<"Silahkan Memilih VIP Anda (1-7) : "; cin>>vip.pil;
    cout<<"\nMetode Pembayaran\n";
    cout<<"=================\n";
    cout<<"1. Dana\n";
    cout<<"2. GoPay\n";
    cout<<"3. OVO\n";
    cout<<"4. ShopeePay\n";
    cout<<"Silahkan Memilih Metode Pembayaran Anda (1-4) : "; cin>>vip.bayar;
    
    system("cls");

    switch (vip.bayar) {
    case 1:
        vip.nama = "Dana";
        break;
    case 2:
        vip.nama= "GoPay";
        break;
    case 3:
        vip.nama= "OVO";
        break;
    case 4:
        vip.nama= "ShopeePay";
        break;
    default:
        cout<<"ERROR\nSilahkan Restart\n";
        delay(15);
        cout << vip.mohon_di_tunggu[3];
        delay(15);
        cout << vip.mohon_di_tunggu[4];
        delay(15);
        cout << vip.mohon_di_tunggu[5];
        delay(10);
        system("cls");
        cout << vip.mohon_di_tunggu[2];
        delay(20);
        system("cls");
        pembuka();
        goto ulang;
        break;
    }
    
    cout<<"Silahkan Masukkan PIN "<< vip.nama << " (6 digit)\n"; cin>>vip.pin_biasa;
        
        system("cls");
        
        while (vip.pin_biasa >999999 || vip.pin_biasa <100000){
        cout<<"Anda Salah Memasukkan PIN, Silahkan Masukkan Ulang PIN " << vip.nama << " (6 digit)\n"; cin>>vip.pin_biasa;
    	}
    	system("cls");
    	
        cout<<"Total Membelinya ? \n"; cin>>vip.beliberapa;

    system("cls");

    switch (vip.pil) {
    case 1:
        vip.langganan = "Standard Monthly Subscription";
        vip.hargatotal = 39000 * vip.beliberapa;
        break;
    case 2:
        vip.langganan = "Standard Quarterly Subscription";
        vip.hargatotal = 109000 * vip.beliberapa;
        break;
    case 3:
        vip.langganan = "Standard Yearly Subscription";
        vip.hargatotal = 399000 * vip.beliberapa;
        break;
    case 4:
        vip.langganan = "Basic Weekly Subscription ";
        vip.hargatotal = 10000 * vip.beliberapa;
        break;
    case 5:
        vip.langganan = "Basic Monthly Subscription";
        vip.hargatotal = 19000 * vip.beliberapa;
        break;
    case 6:
        vip.langganan = "Premium Monthly Subscription";
        vip.hargatotal = 59000 * vip.beliberapa;
        break;
    case 7:
        vip.langganan = "Premium Yearly Subscription";
        vip.hargatotal = 599000 * vip.beliberapa;
        break;
    default:
    	cout<<"ERROR\nSilahkan Restart\n";
        delay(15);
        cout << vip.mohon_di_tunggu[3];
        delay(15);
        cout << vip.mohon_di_tunggu[4];
        delay(15);
        cout << vip.mohon_di_tunggu[5];
        delay(10);
        system("cls");
        cout << vip.mohon_di_tunggu[2];
        delay(20);
        system("cls");
        pembuka();
        goto ulang;
        break;
    }
   MohonDitunggu();
   system("cls");
    cout<<"Anda Sudah Berlangganan "<<vip.langganan<<" iQIYI"<<" Dengan Akumulasi Pembelian : "<<vip.beliberapa<<"x\n";
    cout<<"Total Belanja Rp "<<vip.hargatotal<<endl;
}

int main(){
    iQIYI vip;
    atas:
   	pembuka();  
	pemilihan();
    cout<<"Apakah Anda Ingin Bertransaksi Lagi (y/t)? "; cin>>vip.tanya;
    if(vip.tanya == 'y'){
    	system("cls");
		goto atas;
	}
	else {
		system("cls");
		cout<<"\t\t\t\t\t======================================"<<endl;
		cout<<"\t\t\t\t\t|   Terima kasih Atas Pembeliannya   |"<<endl;
		cout<<"\t\t\t\t\t======================================";
	}
	return 0;
}
