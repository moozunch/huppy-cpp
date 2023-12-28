#include  <iostream>
using namespace std;
// switch case, jalan ketika true

int main() {
    system ("cls");
    int a;
    cout << "masukkan sebuah angka: ";
    cin >> a;
    switch (a <= 5) {
        case true:
            cout << "angka dibawah sama dengan 5" << endl;
    } 
    // practical biasanya gini kalau di pascal
    switch (a) {
        case 1:
            {cout << "angka adalah 1" << endl;
            break; } //pakai break jadi case setelah true ga dijalankan
        case 2:
            cout << "angka adalah 2" << endl;
            break;
        case 3:
            cout << "angka adalah 3" << endl;
            break;
        default: //else nya case
            cout << "Error : angka extended!" << endl; 
            break;
    } 
    cout << "akhir dari program";
    return 0;
}