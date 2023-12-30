#include <iostream>
using namespace std;
// Return : Fungsi dengan kembalian (Kalau di pascal dia function karena punya tipe data)
// Kembalian maksudnya bisa di input ke function dan hasilnya akan dikembalikan ke fungsi f(x)
// Ingat function di pascal, function dipanggil pakai cout.
// Taruh function disebelum main

// function kuadrat bertipe int dengan paramter x bertipe integer
int kuadrat (int x) {
    int y;
    y = x * x;
    return y; //menghasilkan nilai y jika kita panggil function kuadrat
}
// inilah alasan kenapa library math juga termasuk function jadi kita gaperlu nulis sekebonn kayak diatas.


// sebenarnya main ini juuga fungsi
int main () {
    system ("cls");

    int angka; //tipe data untuk masukin ke paramter function harus sama.
    cout << "Masukkan angka yang ingin dikuadratkan: ";
    cin >> angka;
    cout << "Hasil: " <<kuadrat (angka);
    
    return 0; 
}
