#include <iostream>
using namespace std;
// Overloading sebuah fungsi
// Overload = Menimpa

// Misal kita mau buat function untuk agar bisa mencari luas persegi tapi juga sekaligus persegi panjang.
// Function General
double kotak (double panjang, double lebar) { 
    double luas  = panjang * lebar; //luas persegi panjang
    return luas;
}
// Overloading jadi kita bisa buat default untuk si lebar tapi lebar = panjang.
int kotak (int sisi) {
    int luas = sisi * sisi;
    return luas;
}
// Bisa juga Overload untuk konversi dari int ke double, tetap dengan nama yang sama.
double kotak (double sisi) {
    double luas = sisi * sisi;
    cout << "Ini udah di konversi ke double cuy: ";
    return luas;
}

double kotak (double panjang, double lebar, double tinggi) {
    double luas = panjang * lebar * tinggi;
    return luas;
}

int main () {
    system ("cls");
    cout << "Luas kotak 2x4: " <<kotak (2, 4) << endl;
    cout << "Luas kotak 2x2: " <<kotak (2.5) << endl; // Jadi kalaupun parameter nya cuma satu maka dia akan ke function yang param nya cuma satu.
    cout << "Volume kotak 2x4x6: " <<kotak (2, 4, 6) << endl; // Jadi kalaupun parameter nya cuma satu maka dia akan ke function yang param nya cuma satu.
    // jadi dalam function dengan nama yang sama tapi bisa di berbagai kondisi.
    // intinya tetap sama di nama saja.
    return 0;
} 
