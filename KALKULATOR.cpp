#include <iostream>

using namespace std;

int main ()

{
	cout<<" PROGRAM UNTUK MENGOPERASIKAN 2 BUAH BILANGAN "<<endl;
	cout<<" *********************************************"<<endl;
	int bilangan1 , bilangan2;
	string operasi;
	cout<<" Masukkan Angka Pertama = ";
	cin>>bilangan1;
	cout<<" Masukkan Angka Kedua = ";
	cin>>bilangan2;
	cout<<"Masukkan Operasi Bilangan Tersebut = ";
	cin>>operasi;
	
	if (operasi == "+")
	{
		cout<<" Hasilnya = "<<(bilangan1)+(bilangan2)<<endl;
	}
	if (operasi == "-")
	{
		cout<<" Hasilnya = "<<(bilangan1)-(bilangan2)<<endl;
	}
	if (operasi == "*")
	{
		cout<<" Hasilnya = "<<(bilangan1)*(bilangan2)<<endl;
	}
	if (operasi == "/")
	{
		cout<<" Hasilnya = "<<(bilangan1)/(bilangan2)<<endl;
	}

return 0;
}
