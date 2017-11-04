#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int x,y,z;
	char r;
	
	cout<<"Ketikkan Huruf [P/S] = ";cin>>r;
	cout<<endl;
	cout<<endl;
	
	if(r=='P'||r=='p'){
	cout<<"Menghitung Luas Persegi Panjang"<<endl;
	cout<<"\n";
	cout<<"==============================="<<endl;
	cout<<"Masukkan Nilai Panjang\t = ";cin>>x;
	cout<<"Masukkan Nilai Lebar\t = ";cin>>y;
	z=x*y;
	cout<<"Luas Persegi Panjang\t = "<<z<<" cm";
	}
	else if(r=='S'||r=='s'){
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<"==============================="<<endl;
	cout<<"\n";
	cout<<"Masukkan Nilai Alas\t = ";cin>>x;
	cout<<"Masukkan Nilai Tinggi\t = ";cin>>y;
	z=0.5*x*y;
	cout<<"Luas Segitiga\t\t = "<<z<<" cm";
	}	
	else{
		cout<<"Input tidak valid!!!";
	}
	return 0;
}
