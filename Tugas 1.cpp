#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" \t---Menu Login---\n\n";
	cout<<" Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
			if (user == "m.rifyal_k" && pass == "f1b019089")
			{
				cout<<"Selamat Anda Berhasil Login\n";
			}
			else
			{
				cout<<"Ussername dan password anda salah silahkan coba kembali \n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
						
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
    cout<<"\t\t\t\t\t=======================\n";
    cout<<"\t\t\t\t\t\tCOVID-19\n";
    cout<<"\t\t\t\t\t=======================\n\n";
    cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Apa kepanjangan dari COVID-19?\n";
    string pilgan5[50]={"a. Contoh Virus Dusun 2019","b. Corona Virus Disinfectant 2019","c. Contoh Virus Domba 19","d. Corona Virus Disease 2019"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"2. Dimana Virus ini pertama kali ditemukan?\n";
	string pilgan10[50]={"a. China","b. Indonesia","c. Italia","d. Arab Saudi"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;} 
    cout<<"\n";
    cout<<"3. Kapan Virus ini pertama kali ditemukan?\n";
	string pilgan6[50]={"a. November 2019","b. Januari 2020","c.  Oktober 2020","d. Desember 2020"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"4. Bagaimana Cara mendiangnosa Pasien yang terpapar virus ini?\n";
	string pilgan9[50]={"a. Rapid Test","b. CT Scan","c. Tes PCR (polymerase chain reaction) ","d. Semua jawaban benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"5. Berapakah Presentase kematian yang terkonfirmasi diIndonesia?\n";
	string pilgan8[50]={"a. 6,5%","b. 7%","c. 10,5%","d. 5%"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Apa komplikasi yang terjadi akibat virus ini?\n";
    string pilgan2[50]={"a. Susah Tidur","b. Bersin-bersin","c. Gatal-gatal","d. Gagal Ginjal"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"7. Berapa Jumlah kasus yang terjadi diIndonesia?\n";
	string pilgan3[50]={"a. 15.000","b. 16.530","c. 17.025","d. 17.250"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. Apa metode penyebaran utama dari virus ini?\n";
	string pilgan1[50]={"a. Droplet saluran pernafasan","b. Kontak langsung dengan Penderita","c. A dan B salah","d. A dan B benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"9. Siapa yang beresiko tinggi terpapar virus ini??\n";
	string pilgan4[50]={"a. Orang yang diam dirumah","b. Orang yang melakukan perjalanan keluar negri","c. Perawat yang merawat penderita","d. Orang yang tinggal di daerah penyebaran"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"10. Mengapa seorang yang terpapar virus ini harus melakukan isolasi?\n";
	string pilgan7[50]={"a. Agar Tidak menularkan ke orang lain","b. Untuk menyembuhkan diri","c. Untuk mengasingkan diri","d. Agar tidak diketahui oleh orang lain"};
	for (i=0;i<=3;i++)

	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
    cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==================================================="<<endl;
			cout<<"TERIMA KASIH SUDAH MENJAWAB SOAL TENTANG COVID-19\n";
			cout<<"            SEMOGA ANDA SEHAT SELALU             \n";
			cout<<"               TETAP DIAM DIRUMAH                \n";
			cout<<"==================================================="<<endl;
}
