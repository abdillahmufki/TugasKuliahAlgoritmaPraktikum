#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("nomer.txt");

    // pengecekan eror
    if (inFile.fail())
    {
        cerr << "Error saat membuka file" << endl;
        exit(1);
    }
    char x, y;
    inFile >> x >> y;

    cout << "Nomor 1 :" << endl;
    cout << "Nomor 2 :" << endl;

    return 0;
}