/*Abdillah Mufki Auzan Mubin*/
#include<iostream>
using namespace std;

float HitungBonusPegawai(int typepegawai, int jumlahtahun) {
	float total;
	switch (typepegawai) {
	case 1:
		if (jumlahtahun >= 3) {
			return 750000;
		}
		else if (jumlahtahun  == 2) {
			return 500000;
		}
		else if (jumlahtahun == 1) {
			return 250000;
		}
		else {
			return 0;
		}
	break;
	case 2:
		if (jumlahtahun >= 3) {
			return 500000;
		}
		else if (jumlahtahun == 2) {
			return 250000;
		}
		else if (jumlahtahun == 1) {
			return 150000;
		}
		else {
			return 0;
		}
	break;
	case 3:
		if (jumlahtahun >= 3) {
			return 350000;
		}
		else if (jumlahtahun == 2) {
			return 250000;
		}
		else if (jumlahtahun == 1) {
			return 150000;
		}
		else {
			return 0;
		}
	break;
	default:
		return 0;
	break;
	}
}
 void BonusPegawai(int typepegawai, int jumlahtahun) {
	switch (typepegawai) {
	case 1:
		if (jumlahtahun >= 3) {
			cout << 750000;
		}
		else if (jumlahtahun == 2) {
			cout << 500000;
		}
		else if (jumlahtahun == 1) {
			cout << 250000;
		}
		else {
			cout << 0;
		}
		break;
	case 2:
		if (jumlahtahun >= 3) {
			cout << 500000;
		}
		else if (jumlahtahun == 2) {
			cout << 250000;
		}
		else if (jumlahtahun == 1) {
			cout << 150000;
		}
		else {
			cout << 0;
		}
		break;
	case 3:
		if (jumlahtahun >= 3) {
			cout << 350000;
		}
		else if (jumlahtahun == 2) {
			cout << 250000;
		}
		else if (jumlahtahun == 1) {
			cout << 150000;
		}
		else {
			cout << 0;
		}
		break;
	default:
		cout << 0;
		break;
	}
}

int main() {
	int jumlah_tahun, type_pegawai;
	cout << "Bidang Pekerjaan :\n";
	cout << "1.suvervisor \n";
	cout << "2.Project Manager \n";
	cout << "3.Programer \n";

	cout << "Masukan Bidang Pekerjaan :";
	cin >> type_pegawai;
	cout << "Masukan Lama Bekerja :";
	cin >> jumlah_tahun;

	cout << "Bonus Yang Didapat rp :" << HitungBonusPegawai(type_pegawai, jumlah_tahun) << "\n";
	cout << "Bonus Yang Didapat rp :"; BonusPegawai(type_pegawai, jumlah_tahun);

}
