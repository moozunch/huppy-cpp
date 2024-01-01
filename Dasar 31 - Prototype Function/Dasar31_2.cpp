#include <iostream>
using namespace std;


// prototype fungsi
double luas (double panjang, double lebar); 
void garis ();
//harus sama ama yang dibawah, jadi ini kaya deklrasi variabel tapi ini deklarasi function.


int main () {
    system ("cls");
    int panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    garis(); // jangan lupa tanda kurung nya.
    cout << luas (panjang,lebar) << endl;

    return 0;
}


double luas (double panjang, double lebar) {
    return panjang * lebar;
}

void garis () {
    cout << "================" << endl;
}
