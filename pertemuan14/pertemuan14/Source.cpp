//program penjualan
#include <conio.h>
#include <iostream>

void penjualan(float a, float b, float c) {
	float total, temp;
	temp = b * c;
	total = temp - (a * temp);
	cout << "Harga Kotor Barang  : " << temp << endl;
	cout << "Harga Bersih Barang : " << total << endl;
}

//program utama

void main() {
	float diskon, harga, jumlah;
	float total, temp;
	cout << "PROGRAM HITUNG HARGA BARANG" << endl;
	cout << "===========================" << endl << endl;
	cout << "Masukkan harga barang : "; cin >> harga;
	cout << "Masukkan jumlah barang : "; cin >> jumlah;
	cout << "Masukkan diskon barang : "; cin >> diskon;
	cout << "\n";
	penjualan(diskon, harga, jumlah);
	getch();
}