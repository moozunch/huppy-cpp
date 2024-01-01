#include <iostream>
using namespace std;
// Default Argumen pada fungsi (Parameter in pascal).

double volume (double p, double l, double t = 1); //t default otomatis 1 kalau tidak ada isi.

int main () {
    system ("cls");
    cout << "Volume Kubus: " << volume (3, 4, 5) << endl;
    // what if cuma dua yang diketahui maka akan jadi error.
    // cout << "Volume Kubus: " << volume (3, 4) << endl;
    // caranya adalah menggunakan default argument.
    // now let's see dengan default argument double t = 1:
    cout << "Volume Kubus: " << volume (3, 4) << endl;


    return 0;
}

//Default Argument
double volume (double p, double l, double t) {
    // T nya jadi default, jadi kalau t nggak dikethui maka otomati t akan menjadi bernilai 1.
    // dan default harus ditulis di deklarasi di atas.
    return p * l * t;
}
