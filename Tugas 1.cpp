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
	cout<<"NAMA : AURINA WILLY GHODINA\n";
	cout<<"NIM : F1B019032\n";
	cout << 				    "\t\t\t---------------------------------\n";
    cout << 			    	"\t\t\t|Selamat Datang Di Quiz Covid-19|\n";  
    cout << 				    "\t\t\t---------------------------------\n";

	cout<<"                                  SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "aurina" && pass == "111")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan cobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"silakan pilih jawaban yang benar sesuai dengan kemampuan anda,silahkan pilih opsion A,B,C,dan D!\n";
	cout<<"--------------------------------------------------------------------------------------\n";
	cout<<"1.Covid-19 adalah penyakit menular yang disebabkan oleh virus ?\n";
	string pilgan1[50]={"a. Influenza","b. Coronavirus","c. Ebola ","d. rotavirus"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"\n";        
cout<<"2.Dapatkah penyakit Covid-19 dapat bermutasi??\n";
    string pilgan2[50]={"a. tidak ","b.mungkin","c.ya","d.semua jawaban salah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"\n";        
	cout<<"3.Apa yang terjadi jika kita tidak melakukan prosedur covid-19?\n";
	string pilgan3[50]={"a.berisiko tertular covid-19","b.tidak terjadi apa-apa","c.Aman-aman saja","d.semua jawaban salah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";				
	cout<<"4.Berapa hari masa inkubasi penyakit Covid-19\n";
	string pilgan4[50]={"a. 1 hari ","b. 3 hari","c. 1 jam","d. 14 hari"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"\n";       
cout<<"5.siapakah yang rentan terkena covid 19?\n";
    string pilgan5[50]={"a.anak-anak","b.orang-orang yang memiliki penyakit medis","c.bayi","d.remaja"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"6.Dapatkah terkena virus covid-19 dari hewan peliharaan?\n";
	string pilgan6[50]={"a.ya","b.mungkin","c.tidak","d.semua jawaban benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}     
	cout<<"\n";
	cout<<"7.Negara manakah yang memiliki pasien terinfeksi corona terbanyak?\n";
	string pilgan7[50]={"a.Amerika serikat","b.Indonesia","c.Singapore","d.Thailand"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"8.Suhu tubuh berapakah orang yang dapat mengindikasi penyakit covid-19?\n";
	string pilgan8[50]={"a.20 celcius ","b.38 celcius","c.10 celcius","d.25 celcius"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"9.Dimana saja kita dapat memeriksakan diri untuk mengetahui apakah kita terjangkit covid-19?\n";
	string pilgan9[50]={"a.Rumah sakit","b.Mall","c.Hutan","d.Sekolah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	cout<<"10.Berapakah kandungan Hand sanitizer yang diperlukan untuk mencegak penularan covid-19>\n";
	string pilgan10[50]={"a.70%","b.10%","c.5%","d.Tidak ada jawaban yang benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"******PENILAIAN AKHIR QUIZ PILIHAN GANDA 10 SOAL********\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda  : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"\t\t\t\t\t\t----------------------------------"<<endl;
	        cout<<"\t\t\t\t\t\t|silahkan logout dari program quiz|\n";
	        cout<<"\t\t\t\t\t\t--Terimakasih telah berpartisipasi-\n"<<endl;

	
}

