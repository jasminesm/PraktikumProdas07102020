/*Billing Warne*/

#include<iostream>
using namespace std;

int main()
{
	char nama [14];
	int totW;
	int jam,totJ;
	int menit,totM;
	int detik,totD;
	int w;
	
	cout<<"================================================================="<<endl;
	cout<<"================== WELCOME TO JASMINE NET ======================="<<endl;
	cout<<"================================================================="<<endl;
	cout<<"================== Tarif Rp 5000 per jam ========================"<<endl;
	cout<<"Nama User	="<<endl;
	cin>>nama;
	cout<<"Masukkan Jam Mulai	=";
	cin>>jam;
	cout<<"Masukkan Menit 		=";
	cin>>menit;
	cout<<"Masukkan Detik		=";
	cin>>detik;
	
	cout<<"Masukkan Jam Selesai	=";
	cin>>jam;
	cout<<"Masukkan Menit		=";
	cin>>menit;
	cout<<"Masukkan Detik		=";
	cin>>detik;
	
	totJ=jam*5000
	;totM=menit*5000/60
	;totD=detik*5000/3600
	
	;cout<<"Anda Harus Membayar Sebesar	= Rp.";
	totW=totJ+totM+totD;
	cout<<totW<<endl<<endl;
	
}
