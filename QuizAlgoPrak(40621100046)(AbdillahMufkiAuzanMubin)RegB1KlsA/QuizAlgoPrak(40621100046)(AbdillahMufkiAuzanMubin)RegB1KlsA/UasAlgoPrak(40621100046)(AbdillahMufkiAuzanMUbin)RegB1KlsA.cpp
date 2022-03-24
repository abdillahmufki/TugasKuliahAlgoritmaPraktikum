// Abdillah Mufki Auzan Mubin //
#include<iostream>
using namespace std;

string nilaiAkhir(float nilai) {
	if (nilai >= 85 && nilai <= 100) {
		return "Ket : Baik Sekali";
	}else if (nilai >= 75 && nilai <= 85) {
		return "Ket : Baik";
	}
	else if (nilai >= 60  && nilai <= 75) {
		return "Ket : Cukup";
	}
	else (nilai < 60); {
		return "Ket : Kurang";
	}
}
void nilaiUjian() {
	string nama, npm, jurusan, fakultas;
	float nilai;

	cout << "Masukan Npm :"; cin >> npm;
	cout << "Masukan nama :"; cin >> nama;
	cout << "Masukan nilai :"; cin >> nilai;
	cout << "Masukan Jurusan :"; cin >> jurusan;
	cout << "Masukan Fakultas :"; cin >> fakultas;

	cout << "Npm :" << npm << "\n";
	cout << "Nama :" << nama << "\n";
	cout << "Jurusan :" << jurusan << "\n";
	cout << "Fakultas :" << fakultas << "\n";
	cout << "Nilai :" << nilai << "\n";
	cout << nilaiAkhir(nilai);
}

int main() {
	string nama, npm,jurusan,fakultas;
	float nilai;
	nilaiUjian();
	return 0;
}