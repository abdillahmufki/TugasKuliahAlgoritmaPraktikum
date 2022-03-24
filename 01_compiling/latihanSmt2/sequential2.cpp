#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("test2.txt");

    // pengecekan eror
    if (inFile.fail())
    {
        cerr << "Error saat membuka file" << endl;
        exit(1);
    }
    string item;
    int count = 0;

    // membaca file sampai akhir
    while (!inFile.eof())
    {
        inFile >> item;
        count++;
    }
    cout << count << " Item Ditemukan!" << endl;
    return 0;
}