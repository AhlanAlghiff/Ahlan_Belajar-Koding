#include <iostream>
using namespace std;

int main(){


	float a, b, result;
	char opr;
	
	cout << "Selamat Datang di Kalkulator nya Ahlan!! \n";
	cout << "---------------------\n \n";

	cout << "Masukkan Angka Pertama: \n";
	cin >> a;
	cout << "Masukkan Operator (+ - * /): \n";
	cin >> opr;
	cout << "Masukkan Angka kedua: \n";
	cin >> b;
	
	cout << endl;
	cout << "=================\n";
	cout << "Hasil Perhitungan \n";
	cout << a << opr << b;

	switch (opr){
		default : //default : muncul otomatis kalo statement yang di input gaada di case
			cout << "Masukkan Operator dengan benar!";
			break; //break : buat nyetopin, stop! biar case ga dieksekusi semua
		case '+' : //statement kesatu
			result = a + b; //output kalo yang di input "+"
			break;
		case '-' :
			result = a - b;
			break;
		case '*' :
			result = a * b;
			break;
		case '/' :
			result = a / b;
			break;
	}	

	cout << " = " << result << endl;

	cout << endl << endl;
	cout << "Terima Kasih Telah Menggunakan ;)";
	cin.get();
	return 0;
}
