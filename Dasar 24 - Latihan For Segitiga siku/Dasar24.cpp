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
        for (int j = 1; j <= i; j++) {
            cout << "*";
        } 
        cout << " " << endl; //kebawah
    }

    cout << "Segitiga Siku Terbalik" << endl;
    // ingat kalau di pascal dia downto itu dari tinggi sekian ke 0.
    for (int x = tinggi2; x >=1; x--) {
        //cout << "*";
        for (int y = x; y >= 1; y--) {
            cout << "*";
        } 
        cout << " " << endl;
    }

    return 0;
}
