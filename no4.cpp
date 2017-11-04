#include<iostream>

using namespace std;

int main(){
	int ta;
	cout<<"POSITIF,NEGATIF,NOL"<<endl;
	cout<<"++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Masukkan Angka = ";cin>>ta;
	cout<<"================================"<<endl;
	if(ta>0){
		cout<<"Angka yang anda masukkan POSITIF";
	}
	else if(ta<0){
		cout<<"Angka yang anda masukkan NEGATIF";
	}
	else if(ta=0){
		cout<<"Angka yang anda masukkan NOL";
	}
	else{
		cout<<"Angka yang anda masukkan PECAHAN";
	}
		
}
