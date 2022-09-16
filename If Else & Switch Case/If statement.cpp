#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "masukkan nilai a = ";
	cin >> a;
	cout << "masukkan nilai b = ";
	cin >> b;
	
	cout << endl;
	
// if (statement)
//  statement bernilai boolean
	
	if (a == b)
	// 'a' diatas dinamakan statement
	{
	// ini isi programnya
		cout << "Hello World";
	}
	
	
/* 
	Jadi :
	1. kalau statement didalam kurung true (nilainya 1, 2 dst, atau lebih dari 0),
	maka dia akan memunculkan program "hello world".

	2. Tapi kalau statement didalam kurung itu false ( nilanya 0),
	maka dia tidak akah memunculkan program "hello world"
*/	
	cout << endl << endl;
	cout << "gitulah pokoknya" << endl;
	
	cin.get();
	return 0;
	
}
