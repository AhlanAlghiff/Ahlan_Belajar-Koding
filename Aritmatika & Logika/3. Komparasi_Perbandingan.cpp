#include <iostream>
using namespace std;

int main()
{
/*  int a, b;
	cin >> a;
	cin >> b;
*/
	int a = 2;
	int b = 3;
	
//  bool 1 = true dan 0 = false
	bool hasilnya;
	bool hasilnya_2;
	
//	komparasi/perbandingan

//	Sebanding (==)
	hasilnya = (a == b);
	
	cout << hasilnya << endl;
	
//	Tidak Sebanding (!=)
	hasilnya = (a != b);
	
	cout << hasilnya << endl;
	
//	Lebih kecil/Besar (<, >)
	hasilnya = (a < b);
	hasilnya_2 = (a > b);
		
	cout << hasilnya << endl;
	cout << hasilnya_2 << endl;
	
// Lebih Kecil/Besar atau sama dengan (<=, >=)
	hasilnya = (a <= b);
	hasilnya_2 = (a >= b);
		
	cout << hasilnya << endl;
	cout << hasilnya_2 << endl;
	

}
