#include <iostream>
using namespace std;
//program luas dan keliling persegi panjang

void Luas (int panjang, int lebar) {
    int woop;
    woop = panjang * lebar;
    cout << "Luas dari persegi panjang adalah " << woop << endl;
}

void Keliling (int panjang, int lebar) {
    int woop;
    woop = 2 * (panjang + lebar);
    cout << "Keliling dari persegi panjang adalah " << woop << endl;
}


int main () {
    system ("cls");
    int panjang, lebar;
    char lk;


    cout << "Selamat datang di program Hitung Luas dan Keliling Persegi Panjang" << endl;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Ingin mencari Luas atau Keliling (l/k): ";
    cin >> lk;
    if (lk == 'l') {
        Luas (panjang, lebar);
    } else if (lk == 'k') {
        Keliling (panjang, lebar);
    } else {
        cout << "Error: you got the wrong key." << endl;
    }

    return 0;
}
