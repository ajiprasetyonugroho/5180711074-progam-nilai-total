#include <iostream>
using namespace std;

struct data{
char huruf[2];
int angka[4];
double total[4];
double uts,uas,tugas,absen,rata,huruftampil;
};
data matkul;



double nilai(string txt){

cout<<"Masukan nilai "<<txt<<" : ";cin>>matkul.angka[4];
return matkul.angka[4];
}

double hasil(float uts,float uas,float tugas,float absen){

matkul.total[4]=uts*0.2+uas*0.3+tugas*0.35+absen*0.15;
cout<<"total nilai : "<<matkul.total[4];
return matkul.total[4];
}

void tampil(double rata){

if(rata>81){
    matkul.huruf[2]='A';
    cout<<"\nhuruf : "<<matkul.huruf[2];}
else if (rata>61){
     matkul.huruf[2]='B';
    cout<<"\nhuruf : "<<matkul.huruf[2];}
else if (rata>41){
     matkul.huruf[2]='C';
    cout<<"\nhuruf : "<<matkul.huruf[2];}
else if (rata>21){
     matkul.huruf[2]='D';
    cout<<"\nhuruf : "<<matkul.huruf[2];}
else{cout<<"\nkurang makan";  }
}

main(){
cout<<"=============================================";cout<<endl;
cout<<"PROGAM MENGHITUNG NILAI TOTAL & CONVERT HURUF";cout<<endl;
cout<<"=============================================";cout<<endl;

matkul.uts=nilai("uts");
matkul.uas=nilai("uas");
matkul.tugas=nilai("tugas");
matkul.absen=nilai("absen");

matkul.rata=hasil(matkul.uts,matkul.uas,matkul.tugas,matkul.absen);
tampil(matkul.rata);
}

