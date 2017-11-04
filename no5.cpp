#include<iostream>

using namespace std;

int main(){
	int tb,bb,hasil1,hasil2;
	
	cout<<"MENGHITUNG BADAN IDEAL"<<endl;
	cout<<endl;
	cout<<"============================"<<endl;
	cout<<"Input Tiggi Badan = ";cin>>tb;
	cout<<"Input Berat Badan = ";cin>>bb;
	
	
	if(bb<(tb/2.5)){
		cout<<"Anda termasuk UNDERWEIGHT";
	}
	else if((tb/2.5)<=bb<=(tb/2.3)){
		cout<<"Anda termasuk NORMAL";
	}
	else if((tb/2.3)<bb){
		cout<<"Anda termasuk OVERWEIGHT";
	}
	else{
		cout<<"Input Tidak Valid!!!";
	}
}
