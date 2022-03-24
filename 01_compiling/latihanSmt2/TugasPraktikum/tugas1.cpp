#include <iostream>
using namespace std;
main()
{
    int i;
    int cari, ketemu;
    int jmlData;
    int A[100];

    cout << "Jumlah Data : ";
    cin >> jmlData;
    cout << "\n";
    for (i = 1; i <= jmlData; i++)
    {
        cout << "masukan data ke-" << i << " : ";
        cin >> A[i];
    }
    cout << endl;
    cout << "Input Niali Dicari : ";
    cin >> cari;
    cout << endl;
    ketemu = 0;
    for (i = 0; i <= jmlData; i++)
    {
        if (A[i] == cari)
        {
            ketemu++;
        }
    }
    if (ketemu == 0)
    {
        cout << "Data tidak ditemukan" << endl;
    }
    else
    {
        cout << "keterangan : Data Yang Ditemukan Berjumlah " << ketemu << " Buah";
    }
}
