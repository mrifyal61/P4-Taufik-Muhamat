#include <iostream>
using namespace std;
int input(){
    int inpt;
    float harga[10], jumlah[10],tharga=0,tjumlah=0,tbelanja,hdiskon,diskon=0;
    char nm[10];
    string pilih,nama;
    cout<<"Jumlah barang: ";cin>>inpt;
            for(int i=0; i<inpt; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"Nama     : "; cin>>nama;
                cout<<"Harga    : Rp "; cin>>harga[i];
                cout<<"jumlah   : "; cin>>jumlah[i];
                tbelanja+=harga[i]*jumlah[i];              
}
	if(tbelanja>=200000){
    diskon=0.89*tbelanja;
    hdiskon=tbelanja-diskon;
    cout<<"--------------Pembayaran-------------"<<endl;;
    cout<<"Jumlah belanja: Rp "<<tbelanja<<endl;
    cout<<"Diskon 89%   : Rp "<<diskon<<endl;
    cout<<"Total belanja : Rp "<<hdiskon<<endl;
    cout<<"--------------------------------------"<<endl;  
  }
  else{
    cout<<"--------------Pembayaran--------------"<<endl;
    cout<<"Diskon        : - "<<endl;
    cout<<"Total belanja: Rp "<<tbelanja<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"\n\n";
}
}
int jasa(){
    int jasa,bayar,kembali;
    float harga[10],jumlah[10],tharga=0,tjumlah=0,tjasa;
    char nm[10][10];
    string pilih,nama;
    cout<<"Jumlah jasa yang digunakan : ";cin>>jasa;
            for(int i=0; i<jasa; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"Nama jasa     : "; cin>>nama;
                cout<<"Harga      : Rp "; cin>>harga[i];
                cout<<"jumlah   : "; cin>>jumlah[i];
                 tharga+=harga[i]*jumlah[i];
}
	if(bayar){			     
	cout<<"--------------Pembayaran-------------"<<endl;
    cout<<"Total harga: Rp "<<tharga<<endl;
    cout<<"Pembayaran : Rp "; cin>>bayar;
    kembali=bayar-tharga;
    cout<<"Kembalian  : Rp "<<kembali<<endl;
    cout<<"--------------------------------------"<<endl;
}
}
int keluar()
{
keluar:
 cout<<"================================"<<endl;
 cout<<"==========TERIMA KASIH=========="<<endl;
 cout<<"=======Sampai Jumpa Lagi========"<<endl;
 cout<<"================================"<<endl;
}
int main(){
	
	int i;
	 cout<<"======================"<<endl;
     cout<<"|      Hai_G Vapor   |"<<endl;
     cout<<"======================"<<endl;
     cout<<"\n";
	 cout<<"======Login Menu======"<<endl;
	string pass_input, user_input;  
    string username ="Rifyal";    
    string password = "F1B019089";    
    string login = "block";    
    i = 1;    
   
   do {        
       cout << "Username = "; cin>>user_input;        
       cout << "Password = "; cin>>pass_input;        
       if (user_input == username && pass_input == password) {    
       cout << "\n|--- Login Berhasil ---|" << endl;            
           i = 4;
           login = "berhasil";        } 
          
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }
        system("pause");
        system("cls");
       }
 while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba lagi besok. Terima Kasih..\n\n";      
       goto keluar;
       
	}   
 cout<< "====================================="<<endl;
 cout<< "|           Daftar Barang           |"<<endl;
 cout<< "====================================="<<endl;
 cout<< "|    Pod VinciX  = Rp 150000        |"<<endl;
 cout<< "|    Pod Arteri  = Rp 200000        |"<<endl;
 cout<< "|    Pod Voopoo  = Rp 175000        |"<<endl;
 cout<< "|    Pod Aqua    = Rp 100000        |"<<endl;
 cout<< "====================================="<<endl;
 cout<< "====================================="<<endl;
 cout<< "|           Daftar Jasa             |"<<endl;
 cout<< "====================================="<<endl;
 cout<< "|    Pemasangan Coil = Rp 20000     |"<<endl;
 cout<< "|    Ganti Kapas     = Rp 15000     |"<<endl;
 cout<< "====================================="<<endl;
 awal :
int pilihan, pilih; 
 cout<< "====================================="<<endl;
 cout<< "|    1.Input Barang dan pembayaran  |"<<endl;
 cout<< "|    2.Input Jasa dan pembayaran    |"<<endl;
 cout<< "|    3.Keluar                       |"<<endl;
 cout<< "====================================="<<endl;
 cout<< "Masukkan pilihan  = " ;
 cin>>pilih; 

 switch (pilih)
 {
  case 1:
   system("cls");
   input();
   goto awal;
   break;   
  case 2:
   system("cls");
   jasa();
   goto awal;
   break;   
  case 3:
  	system("cls");
  	keluar:
  	keluar();
}
}
