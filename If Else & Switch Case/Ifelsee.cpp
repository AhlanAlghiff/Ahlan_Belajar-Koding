#include <iostream>
using namespace std;

int main(){
	
	int password;
	
	cout << "masukkan password = ";
	cin >> password;

	cout << endl;
	
	if (password == 123){
		
	cout << "benar sekali anda bisa login!" << endl;
	
	} 
//		else{	
//		cout << "password yang anda masukkan salah" << endl;		
//		}
	else if (password == 321){
		cout << "benar sekali ini password kedua anda!";
	}
	// arti : lalu jika
	
	/*
	jadi kalau misalkan didalam kurung "if" tidak sesuai, maka dia bakalan
	menjalankan program yang ada di "else", please jangan bingung!
	*/
	cin.get();
	return 0;
}
