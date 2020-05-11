#include <iostream>
#include <cstdlib>
using namespace std;

main (){
cout<<"Nama : Aurina willy ghodina\n";
cout<<"Nim : F1B019032\n";
cout<<"Kelompok: Kelompok 6\n\n";
int nim1[3][3];
int nim2[3][3];
int jml [2][2];
int x, y;
cout<< "PERKALIAN NIM\n";
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim1[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim2[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
jml [x][y] = nim1[x][0]*nim2[0][y]+nim1[x][1]*nim2[1][y];
cout<<jml [x][y] <<" ";
}
cout<<endl;
}
}
