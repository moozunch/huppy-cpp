#include <iostream>
using namespace std;

int main () {
    system ("cls");
    int tinggi, tinggi2;
    cout << "Tinggi segitiga: " ;
    cin >> tinggi;
    cout << "Tinggi segitiga-2: " ;
    cin >> tinggi2;
    
    cout << "Pattern 1 \n";
    for (int i = 1; i <= tinggi; i++) {
        //cout << "*";
        for (int j = 1; j < i; j++) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int k = tinggi; k >= i; k--) {
            cout << "*";
        }
        //kebalikan
        for (int h = tinggi-1; h >= i; h--) { //karena kan i kebalikannya so it's fine h>=i dan kita mau ngikutin i terus dinamis.
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }

    cout << "Pattern 2 \n";
    for (int x = tinggi2; x >= 1; x--) {
        //cout << "*";
        for (int y = x; y > 1; y--) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int z = x; z <= tinggi2; z++) {
            cout << "*";
        }
        //kebalikan
        for (int w = x; w <= tinggi2-1; w++) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }


    // Ternyata logic saya tidak salah, hanya kurang tepat dan kurang cepat saja but issall good :b !!
    return 0;
}
