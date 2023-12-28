#include <iostream>
using namespace std;

int main () {
    system ("cls");
    int a;
    cout << "Masukkan sebuah angka: ";
    cin >> a;
    
    if (a <= 21) {
        cout << "angka lebih kecil sama dengan 21"  << endl;;
    } else if ((a >= 21) and (a <= 75)) {
        cout << "angka lebih besar 21 dan lebih kecil dari 75"  << endl;
    } else {
        cout << "angka lebih besar dari 75"  << endl; 
    }
    cout << "program selesai";
    // bisa juga nested yk already how it is.

    return 0;
}
