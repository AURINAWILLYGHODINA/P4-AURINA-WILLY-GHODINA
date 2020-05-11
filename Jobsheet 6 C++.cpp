#include <iostream>
using namespace std;

main (){
cout<<"Nama : Aurina willy ghodina\n";
cout<<"Nim : F1B019032\n";
cout<<"Kelompok: Kelompok 6\n\n";
int x,y, mtrx [2][2];
cout<< "TRANSPOSE MATRIX" <<endl;
cout<< "Masukkan jumlahbaris = ";
cin>> x;
cout<< "Masukkan jumlahkolom = ";
cin>> y;
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<< "Masukkan nilai index " <<i<< "," << j << " = ";
cin>>mtrx [i][j];
}
}
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<<mtrx [i][j] <<"  ";
}
cout<<endl<<endl;
}
cout<<endl;
for (int i = 0; i< y; i++){
for (int j = 0; j < x; j++){
cout<<mtrx [j][i] <<"  ";
}
cout<<endl<<endl;
}
}
