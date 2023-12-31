#include <iostream>
using namespace std;
//program luas dan keliling persegi panjang

int Luas (int panjang, int lebar) {
    int woop;
    woop = panjang * lebar;
    return woop;
}

int Keliling (int panjang, int lebar) {
    int woop;
    woop = 2 * (panjang + lebar);
    return woop;
}


int main () {
    system("cls");
    int panjang, lebar;
    char lk;
    cout << "Selamat datang di Program Menghitung Luas dan Keliling Persegi panjang" << endl;
    cout << "Masukkan Panjang Persegi Panjang: ";
    cin >> panjang; 
    cout << "Masukkan Lebar Persegi Panjang: ";
    cin >> lebar; 
    cout << "Ingin mencari luas atau keliling (l/k): ";
    cin >> lk; 
    if (lk == 'l') {
        cout << "Luas dari Persegi Panjang adalah " << Luas (panjang, lebar) << " satuan luas" << endl;
    } else if (lk == 'k') {
        cout << "Keliling dari Persegi Panjang adalah " << Keliling (panjang, lebar)  << endl;
    } else {
        cout <<"Error: you got the wrong key.";
    }

    return 0;
}
