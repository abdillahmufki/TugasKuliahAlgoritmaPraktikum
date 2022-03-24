#include <iostream>
using namespace std;

int main() {
	// bilangan bulat
	unsigned int a = 5; //32bit
	long b = 6; 
	short c = 7;

	//bilangan decimal
	float d = 1.0;
	double e = 2.5; 

	//character
	char f = 'a';

	//booelan
	bool g = true; // true/falsea

	cout << a << std::endl;
	cout << sizeof(a) << " byte " << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;

	std::cin.get();
	return 0;
}