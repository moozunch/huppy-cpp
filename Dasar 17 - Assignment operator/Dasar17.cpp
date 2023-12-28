#include <iostream>
using namespace std;
//operator assignment

int main () {
    system ("cls");

    //assignment standart
    int a = 10;
    cout << "Nilai awal: "<< a << endl; 
    /* 
    kan biasanya : 
    a = a + 3 // hasil = 13
    jadi instead of tuls gitu bisa juga:        */
    a += 3; // sama saja dengan a = a + 3
    cout << "a += 3: "<< a << endl; // a sekarang jadi 13
    a -= 1; 
    cout << "a -= 1: "<< a << endl; // a sekarang jadi 12
    a *= 2; 
    cout << "a *= 2: "<< a << endl; // a sekarang jadi 24
    a /= 3; 
    cout << "a /= 2: "<< a << endl; // a sekarang jadi 8
    a %= 3; 
    cout << "a %= 3: "<< a << endl; // a sekarang jadi 2

    return 0;
}
