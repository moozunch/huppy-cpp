#include <iostream>
using namespace std;
// Reference beda sama pointer.
// Kalau pointer int a = 5 dengan 5 sebagai value dan ada alamat yang diakses dengan &a
// Kalau Reference dia misal ada dua variable int a dan int b, sifatnya sama juga termasuk isinya.
// Jadi gimana agar a ini sama aja si b agar saat a diubah b juga ikutan berubah.


int main () {
    // Variabel
    int a = 5;
    cout << "Nilai dari a  : " << a << endl;
    cout << "Alamat dari a : " << &a << endl;

    // Linking b, sharing alamat
    int &b = a;
    cout << "Nilai dari b  : " << b << endl;
    cout << "Alamat dari b : " << &b << endl;
    // Sehingga jika a dirubah
    a = 10;
    cout << "Nilai dari a  : " << a << endl;
    cout << "Nilai dari b  : " << b << endl;
    // Bagaimana jika b yang dirubah?
    b = 2;
    cout << "Nilai dari a  : " << a << endl;
    cout << "Nilai dari b  : " << b << endl;

    // See berubah kan semua karena mereka share the same address.
    // Easy!!!
    // Pointer dan Refrencing easy, semua tergantung mindset xixixi semua berhubungan ke pengalamatan di komputer.

    return 0;
}
