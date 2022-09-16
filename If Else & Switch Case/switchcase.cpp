#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout << "Masukkan Kata Kunci = ";
	cin >> a;
	
	switch (a){
		default : //default : muncul otomatis kalo statement yang di input gaada di case
			cout << "masukkan kata kunci!";
			break; //break : buat nyetopin, stop! biar case ga dieksekusi semua
		case 1 : //statement kesatu
			cout << "subhanAllah"; //output kalo yang di input "1"
			break;
		case 2 :
			cout << "Alhamdulillah";
			break;
		case 3 :
			cout << "LailahaillAllah";
			break;
		case 4 :
			cout << "Allahuakbar";
			break;
			
	}	
	cin.get();
	return 0;
}
