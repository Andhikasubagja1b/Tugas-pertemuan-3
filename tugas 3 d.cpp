#include <iostream>
using namespace std;
int main(){
    int pilih;
    int luas;

    cout<<"ketik angka 1 sampai 3"<<endl;
    cin>> pilih;

    switch (pilih){

case 1:
    int sisi;
    cout<<"masukan nilai"<<endl;
    cin>>sisi;
    luas= sisi*sisi;
    cout<<"hasil perhitungan "<< luas<<endl;

case 2:
    int panjang,lebar;
    cout<<"masukan nilai panjang"<<endl;
    cin>>panjang;
    cout<<"masukan nilai lebar"<<endl;
    cin>>lebar;
    luas=panjang*lebar;
    cout<<"hasil perhitungan "<<luas<<endl;

case 3:
    int alas,tinggi;
    cout<<"masukan nilai alas"<<endl;
    cin>>alas;
    cout<<"masukan nilai tinggi"<<endl;
    cin>>tinggi;
    luas= alas*tinggi;
    cout<<"hasil perhitungan "<<luas<<endl;

default:
    cout<<"pilih angka sesuai pilihan"<<endl;


}





}

