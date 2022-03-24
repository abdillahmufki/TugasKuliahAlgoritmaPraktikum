#include<iostream>

using namespace std;

int main() 
{

	// assigment
	int a = 10;

	cout << " nilai awal dari a adalah " << a << endl;
	
	// assigment operator
	// variabel = variabel operator ekspresi
	//      a   =   a          -      3
	// variabel operator = ekspresi 
	//     a        +=        3

	a += 3;
	cout << "ditamabah 3 menjadi " << a << endl;

	a -= 3;
	cout << "dikurangi 3 menjadi " << a << endl;

	a /= 3;
	cout << "dibagi 3 menjadi " << a << endl;

	a *= 3;
	cout << "dikali 3 menjadi " << a << endl;

	a %= 3;
	cout << "dimodulus 3 menjadi " << a << endl;




	cin.get();
	return 0;
}