#include <iostream>
using namespace std;
// Fungsi Rekursif --> Recurtion: Pengulangan.
// Fungsi mengulang dirinya sendiri lagi.
// Ingat kita gamau buat si fungsi ini infinite, kita mau buat dia finite (ada akhir)


// contoh fungsi rekursif terbatas.
int pangkatfor (int a, int b){
    int hasil = 1; //inisialisasi
    for (int i = 1; i <= b; i++) {
        hasil *= a; //mengulang perkalian hasil dengan a sebanyak b
    }
    return hasil;
}

int pangkatrekursif (int a, int b) {
    int hasil;
    if (b <= 1) {
        cout << "Akhir perulangan rekursif" << endl;
        return a;
    } else {
        cout << "Aku diulang rekursif untuk kesekian kalinya :b" << endl;
        hasil = a * pangkatrekursif (a,(b-1)); //jadi b akan terus dikurang sampai b <= 1
        return hasil;
    }
    // sejauh ini hasil nya ga keluar karena ini dia infinite alias gatau kapan berhentinya si pengulangan jadi belum dikembalikan hasilnya.

}

int main () {
    system ("cls");
    int a, b;
    cout << "Angka yang mau dipangkat: ";
    cin >> a;
    cout << "Dipangkatin berapa: ";
    cin >> b;
    cout << "Hasil " << a << " pangkat " << b << " menggunakan for adalah " << pangkatfor (a,b) << endl;
    cout << "Hasil " << a << " pangkat " << b << " menggunakan rekursif adalah \n" << pangkatrekursif (a,b) << endl;

    return 0;
}
