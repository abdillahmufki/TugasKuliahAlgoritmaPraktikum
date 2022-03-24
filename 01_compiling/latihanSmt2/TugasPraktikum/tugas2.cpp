#include <iostream>

#include <cstring>

using namespace std;

int main()

{

    int a, bv = 0, bk = 0, ba = 0, bkar = 0, karak = 0, ang = 0, pkata, v = 0, k = 0;

    char kata[200], vokal[200], konsonan[200], angka[200], karakter[200];

    cout << "== == = Program Penghitung Huruf Vokal dan Konsonan == == =\n\n";

    cout << "Masukkan kalimat : ";

    cin.getline(kata, sizeof(kata) - 1);

    pkata = strlen(kata);

    for (a = 0; a < pkata; a++)

    {

        if ((kata[a] == "A") || (kata[a] == "a") ||

            (kata[a] == "I") || (kata[a] == "i") ||

            (kata[a] == "U") || (kata[a] == "u") ||

            (kata[a] == "E") || (kata[a] == "e") ||

            (kata[a] == "O") || (kata[a] == "o"))

        {

            bv++;

            v++;

            vokal[v] = kata[a];
        }

        else if (kata[a] == " ")

        {
        }

        else if ((kata[a] == "1") || (kata[a] == "2") ||

                 (kata[a] == "3") || (kata[a] == "4") ||

                 (kata[a] == "5") || (kata[a] == "6") ||

                 (kata[a] == "7") || (kata[a] == "8") ||

                 (kata[a] == "9") || (kata[a] == "0"))

        {

            ba++;

            ang++;

            angka[ang] = kata[a];
        }

        else if ((kata[a] == "q") || (kata[a] == "Q") ||

                 (kata[a] == "w") || (kata[a] == "W") ||

                 (kata[a] == "r") || (kata[a] == "R") ||

                 (kata[a] == "t") || (kata[a] == "T") ||

                 (kata[a] == "y") || (kata[a] == "Y") ||

                 (kata[a] == "p") || (kata[a] == "P") ||

                 (kata[a] == "s") || (kata[a] == "S") ||

                 (kata[a] == "d") || (kata[a] == "D") ||

                 (kata[a] == "f") || (kata[a] == "F") ||

                 (kata[a] == "g") || (kata[a] == "G") ||

                 (kata[a] == "h") || (kata[a] == "H") ||

                 (kata[a] == "j") || (kata[a] == "J") ||

                 (kata[a] == "k") || (kata[a] == "K") ||

                 (kata[a] == "l") || (kata[a] == "L") ||

                 (kata[a] == "z") || (kata[a] == "Z") ||

                 (kata[a] == "x") || (kata[a] == "X") ||

                 (kata[a] == "c") || (kata[a] == "C") ||

                 (kata[a] == "v") || (kata[a] == "V") ||

                 (kata[a] == "b") || (kata[a] == "B") ||

                 (kata[a] == "n") || (kata[a] == "N") ||

                 (kata[a] == "m") || (kata[a] == "M"))

        {

            bk++;

            k++;

            konsonan[k] = kata[a];
        }

        else

        {

            bkar++;

            karak++;

            karakter[karak] = kata[a];
        }
    }

    cout << "\n == == == == == == == == == == == Hasil == == == == == == == == == == == == ==\n\n";

    cout << "Banyak huruf vokal : " << bv;

    if (bv != 0)

        cout << " adalah ";

    for (int i = 1; i <= v; i++)

    {

        cout << vokal[i];

        if (i < v - 1)

            cout << " , ";

        else if (i == v - 1)

            cout << " dan ";
    }

    cout << "\nBanyak huruf konsonan : " << bk;

    if (bk != 0)

        cout << " adalah ";

    for (int i = 1; i <= k; i++)

    {

        cout << konsonan[i];

        if (i < k - 1)

            cout << " , ";

        else if (i == k - 1)

            cout << " dan ";
    }

    cout << "\nBanyak karakter angka : " << ba;

    if (ba != 0)

        cout << " adalah ";

    for (int i = 1; i <= ang; i++)

    {

        cout << angka[i];

        if (i < ang - 1)

            cout << " , “;

                else if (i == ang - 1)

                    cout
                 << " dan “;
    }

    cout <<“\nBanyak karakter khusus : “<< bkar;

    if (bkar != 0)

        cout << " adalah “;

            for (int i = 1; i <= karak; i++)

        {

            cout << karakter[i];

            if (i < karak - 1)

                cout << " , “;

                    else if (i == karak - 1)

                        cout
                     << " dan ";
        }

    cout << endl
         << endl;

    char cari;

    int temu = 0;

    cout <<“Masukkan data yang ingin anda cari : “;

    cin >> cari;

    for (a = 0; a < pkata; a++)

    {

        if (kata[a] == cari)

        {

            temu = 1;

            break;
        }
    }

    cout << endl
         << endl;

    if (temu == 1)

        cout << " ->data ditemukan < -\n";

    else

        cout << " ->data tidak ditemukan < -\n";

    cout << endl
         << endl;

    system("pause");
}