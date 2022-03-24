#include<iostream>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "selamat datang di program calculator \n\n";

	//memasukan input dari user
	cout << "masukan nilai pertama: ";
	cin >> a;
	cout << "pilih operator +,-,/,*:";
	cin >> aritmatika;
	cout << "masukan nilai kedua : ";
	cin >> b;

	cout << "\n hasil perhitungan";
	cout << a << aritmatika << b;

if (aritmatika == '+'){
		hasil = a + b;
}else if (aritmatika == '-'){
		hasil = a - b;
}else if (aritmatika == '/'){
		hasil = a / b;
}else if (aritmatika == '*'){
hasil = a * b;
}
else {
	cout << "tidak ditemukan" << endl;
}

cout << " = " << hasil << endl;

	cin.get();
	return 0;
}