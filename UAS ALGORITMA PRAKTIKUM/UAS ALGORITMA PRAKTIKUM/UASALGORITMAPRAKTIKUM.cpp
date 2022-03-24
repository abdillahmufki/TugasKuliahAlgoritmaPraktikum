/*Abdillah Mufki Auzan Mubin*/

#include <iostream>

using namespace std;

int kuadrat(int x) {
	int y;
	y = x * x;
	return y;
}

int main() {
	
	int input, hasil;
	cout << "Masukan Nilai Kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);

	cout << hasil << endl;

	cin.get();
	return 0;
}