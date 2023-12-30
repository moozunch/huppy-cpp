#include <iostream>
using namespace std;

int main () {
    system("cls");
    int tinggi, tinggi2;
    cout << "Masukkan tinggi Segitiga: ";
    cin >> tinggi;
    cout << "Masukkan tinggi Segitiga-2: ";
    cin >> tinggi2;

    cout << "Pattern 1" << endl;
    for (int i = 1; i <= tinggi; i++) {
        //cout << "*";
        for (int j = tinggi; j > i; j--) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        // karena aslinya if we think about it adalah 2*i tapi lebih 1
        for (int k = 1; k <= (2*i-1); k++) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }

    cout << "Pattern 2" << endl;
    for (int x = 1; x <= tinggi2; x++) {
        //cout << "*";
        for (int y = 1; y < x; y++) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int z = tinggi2; z >= (2*x-tinggi2); z--) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }

    return 0;
}