#include <iostream>
using namespace std;
// for looping

int main () {
    system ("cls");
    int i;

    //for (inisialisasi; kondisi; increment) {aksi}
    // si increment nya inilah yang dia jadi to/downto
    cout << "Looping Pertama" << endl; 
    for (i = 1; i <= 5; i++) {
        cout << "Halo " << i << endl;
    } cout << " " << endl;

    cout << "Looping Kedua" << endl; 
    for (int j = 1; j <= 5; j += 2) {
        cout << "Hore " << j << endl;
    } cout << " " << endl;

    cout << "Looping Ketiga" << endl; 
    for (int h = 1; h >= -5; h--) {
        cout << "Hupla " << h << endl;
    } cout << " " << endl;

    cout << "Looping Keempat" << endl;
    int total = 0; //inisialisasi total 
    for (int h = 1; h >= -5; h--) {
        cout << "Hupla " << h << endl;
        total += h;
    } 
    cout << "total: " << total << endl; //output total diluar biar ga di copy juga outputnya, tapi hasilnya dihitung.
    cout << " " << endl; // enter aja

    cout << "Looping Kelima" << endl; 
    for (int x = 1; x <= 5; x++) {
        cout << "*";
        //nested loop
        for (int y = 1; y <= 5; y++) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
        //program simple nested loop
    } cout << " " << endl;

    return 0;
}
