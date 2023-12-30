#include <iostream>
using namespace std;

int main () {
    system ("cls");
    int tinggi, tinggi2;
    cout << "Tinggi segitiga: " ;
    cin >> tinggi;
    cout << "Tinggi segitiga 2: " ;
    cin >> tinggi2;

    for (int i = 1; i <= tinggi; i++) {
        //cout << "*";
        for (int j = 1; j < i; j++) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int k = tinggi; k >= i; k--) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }

    for (int i = tinggi; i >= 1; i--) {
        //cout << "*";
        for (int j = i; j > 1; j--) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int k = i; k <= tinggi; k++) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }

    return 0;
}