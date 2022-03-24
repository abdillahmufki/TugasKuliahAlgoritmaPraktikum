#include <iostream>
using namespace std;

void fungsiOverload(void) {
	cout << "Ini No Antrian Saya" << endl;
}

int fungsiOverload(int bil1, int bil2) {
	int operasi;
	operasi = bil1 * bil2;
	return operasi;
}

int main() {
	fungsiOverload();
	cout << "Hasil :" << fungsiOverload(3, 5) << endl;
	return 0;
}