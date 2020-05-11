#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void login(){
   string user, pass;
   int i, menu, awal, pilih;
   cout << 				"\t\t\t\t---------------------------------------------------------\n";
   cout << 				"\t\t\t\t|Selamat Datang Di Program Surat Masuk dan Surat Keluar|\n";  
   cout << 				"\t\t\t\t---------------------------------------------------------\n";
   int login=0;
   i = 1;
   do {
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user =="AURINAWILLYGHODINA" && pass =="F1B019032"){
           cout << "--------------------\n";
           cout << "Anda Berhasil Login" <<endl;
           cout << "--------------------\n\n";
           system("pause");
           system("cls");
           i=4;
           login=1;
  }
       else {
           cout << "------------------------\n";          
           cout << "Maaf ID & PASSWORD Salah!" <<endl;
     cout << "-------------------------\n\n";          
           i = i +1;
       }
    }while (i <= 3);
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
       cout<< "Mohon Maaf Akun Anda Kami Blockir Untuk Sementara\n";
       cout<<"silahkan hubungi kami melalui e-mail aurina4141@gmail.com terima kasih";
    getch();
    exit(0);
    }
}

int main(){
	login();
	awal:
	    system("cls");
	    int i, menu, awal, pilih,menu1, menu2, exit;
		cout<<"|=======Program Surat Masuk dan Surat Keluar=======|\n";
		cout<<"|================Assalamu'alaikum =================|\nSilahkan masukkan pilihan: ";
		cout<<"\n\n ===|1. Surat Masuk  |===\n ===|2. Surat Keluar |===\n ===|3. Exit         |===";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
		goto menu1;
		case 2:
	    goto menu2;
		case 3:
		goto exit;
	menu1:
	    system("cls");
	        cout<< "\t\t\t\t\t\t\----------------------\n";
	        cout<< "\t\t\t\t\t\t\|Program Surat Masuk|\n";
	        cout<< "\t\t\t\t\t\t\----------------------\n";
			cout<< "list Surat Masuk : \n";
			cout<<"1. Spotify\n";
			cout<<"2. Duolingo\n";
			cout<<"3. Aku Pintar\n";
			cout<<"4. Instagram\n";
			cout<<"5. Jenius\n";
			cout<<"6. Facebook\n";
			cout<<"7. Buat Surat\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" Nomer surat     : 1/Spotify/XX/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Spotify\n";
			  	cout<<" Isi Surat       : Kami selalu di sini untuk membantu jika anda membutuhkannya \n";}  	
			if (pilih == 2){
			  	cout<<" Nomer surat     : 4/Duoligo/XX1/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Duoligo\n";
			  	cout<<" Isi Surat       : Awali hari yang baik dengan belajar\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 2/Aku Pintar/V1/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Aku pintar\n";
			  	cout<<" Isi Surat       : Kami sudah menyediakan beberapa konten keren untuk anda\n";}
			if (pilih == 4){
			  	cout<<" Nomer surat     : 10/Instagram/II/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Instagram\n";
			  	cout<<" Isi Surat       : Selamat akun anda telah diverifikasi\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 6/Jenius/I/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Jenius\n";
			  	cout<<" Isi Surat       : Cek kesehatan keuanganmu dengan Financial Checkup\n";}
			  	system ("pause");
			if (pilih == 6){
			  	cout<<" Nomer surat     : 4/Facebook/I/2020 \n"; 
			  	cout<<" Tanggal surat   : 9/05/2020\n";
			  	cout<<" Asal surat      : Facebook\n";
			  	cout<<" Isi Surat       : Selamat anda berhasil login \n";}
			if (pilih == 7){
				 int n;
                 char a[1000][30],b[1000][30],c[1000][30],d[1000][30];
                 cout<<"Input:\n\n";
                 cout<<"Masukan banyak data yang ingin diinput = ";
                 cin>>n;
                 cout<<endl<<endl;
                 for (int i=0;i<n;i++){
                 cout<<"Data ke-"<<i+1<<endl;
                 cout<<"Masukan nomor surat\t= ";
                 scanf(" %[^\n]s",a[i]);
                 cout<<"Masukan alamat surat\t= ";
                 cin>>b[i];
                 cout<<"Masukan tanggal surat\t= ";
                 cin>>c[i];
                 cout<<"Masukan isi surat\t= ";
                 cin>>d[i];
                 }
                 system("CLS");
                 cout<<"Output:\n\n";
                 cout<<"===============================================================================================================\n";
                 cout<<"|  No  |           nomor surat           | alamat surat | tanggal surat |               isi surat             |\n";
                 cout<<"===============================================================================================================\n";
                 for(int i=0;i<n;i++){
                 cout<<"|  "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
                 cout<<""<<setiosflags(ios::left)<<setw(32)<<a[i]<<"|";
                 cout<<""<<setiosflags(ios::left)<<setw(13)<<b[i]<<"|";
                 cout<<""<<setiosflags(ios::left)<<setw(14)<<c[i]<<"|";
                 cout<<""<<setiosflags(ios::left)<<setw(36)<<d[i]<<"|";
                 cout<<"\n============================================================================================================\n";
			}
		system("pause");
		goto mmenu;
}
}
	
	mmenu:
	    system("cls");
		cout << "\tProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat masuk\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu1;
	menu2:
	   system("cls");
		    cout<< "\t\t\t\t\t\t\---------------------\n";
	        cout<< "\t\t\t\t\t\t\|Program Surat Keluar|\n";
	        cout<< "\t\t\t\t\t\t\---------------------\n";
			cout<< "list Surat Keluar : \n";
			cout<<"1. spotify\n";
			cout<<"2. Duolingo\n";
			cout<<"3. Aku Pintar\n";
			cout<<"4. Instagram\n";
			cout<<"5. Jenius\n";
			cout<<"6. Buat Pesan\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" Nomer surat     : 1/Aurina/I/2020 \n"; 
			  	cout<<" Tanggal surat   : 14/05/2020\n";
			  	cout<<" Tujuan Surat    : spotify\n";
			  	cout<<" Isi Surat       : Terima Kasih atas penawaran yang diberikan \n";}
			if (pilih == 2){
			  	cout<<" Nomer surat     : 2/Aurina/II/2020 \n"; 
			  	cout<<" Tanggal surat   : 14/05/2020\n";
			  	cout<<" Tujuan Surat    : Duolingo\n";
			  	cout<<" Isi Surat       : Terima Kasih atas motivasi yang diberikan\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 3/Aurina/III/2020 \n"; 
			  	cout<<" Tanggal surat   : 14/05/2020\n";
			  	cout<<" Tujuan Surat    : Aku Pintar\n";
			  	cout<<" Isi Surat       : Terima kasih atas penawaran yang diberikan\n";}
			if (pilih == 4){
			  	cout<<" Nomer surat     : 4/Aurina/IV/2020 \n"; 
			  	cout<<" Tanggal surat   : 14/05/2020\n";
			  	cout<<" Tujuan Surat    : Instagram\n";
			  	cout<<" Isi Surat       : Terima kasih atas pemberitahuannya\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 5/Aurina/V/2020 \n"; 
			  	cout<<" Tanggal surat   : 14/05/2020\n";
			  	cout<<" Tujuan Surat    : Jenius\n";
			  	cout<<" Isi Surat       : Semoga bisa bermanfaat bagi semua orang\n";}
			if (pilih == 6){				
                 char ks[50],ns[50],ts[50],as[50],is[50];
				cout<<"Silahkan Ketikkan Surat Anda  :\n"; 
				gets(ks);
			    cout<<"Masukkan Nomer surat    : ";
	            gets(ns);
	            cout<<"Masukkan Tanggal surat  : ";
	            gets(ts);
	            cout<<"Masukkan Asal surat     : ";
	            gets(as);
	            cout<<"Masukkan Isi Surat      : ";
	            gets(is);
	            cout<<"\n\nNomer Surat Anda         :"<<ns;
	            cout<<"\nTanggal Surat Anda       :"<<ts;
	            cout<<"\nAlamat Tujuan Surat Anda :"<<as;
	            cout<<"\nIsi Surat Anda           :"<<is;}
	            cout<<"\n";
	            system("pause");
			    system("cls");
	        	goto kmenu;
	kmenu:
	    cout << "\nProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat keluar\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu2;
	exit:
	  cout<< "\tTerima Kasih Telah Mencoba";

	
}
}
}
