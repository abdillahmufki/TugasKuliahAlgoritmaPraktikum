#include<iostream>
#include<iomanip>
using namespace std;

void garis(); //prototipe fungsi garis()

int main() {

    garis(); //memanggil fungsi garis ()

    cout << setiosflags(ios::left); //membuat rata kiri
    cout << setw(15) << "Nama Barang" //setw() memberikan ruang untuk karakter/nilai
        << setw(15) << "Harga"
        << "Jumlah Barang" << endl;
    garis(); //memanggil fungsi garis ()

    cout << setw(15) << "Insto"
        << setw(15) << "20.000"
        << 10 << endl;
    cout << setw(15) << "Baygon"
        << setw(15) << "10.000"
        << 20 << endl;
    cout << setw(15) << "Kipas Dinding"
        << setw(15) << "150.000"
        << 10 << endl;
    cout << setw(15) << "Tikar"
        << setw(15) << "50.000"
        << 20 << endl;

    garis(); //memanggil fungsi garis ()
}

void garis() {  //fungsi garis ()
    for (int i = 0; i < 50; i++)
        cout << '=';
    cout << endl;
}