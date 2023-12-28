#include <iostream>
using namespace std;
// increament (+) penjumlahan bertahap : preincrement (sebellum) dan postincrement (sesudah)
//dan decrement (-) : juga ada post dan pre


int main () {
    system ("cls");

    int a = 5;
    // postincrement, print dulu baru ditambahkan
    cout << "Postincrement" << endl;
    cout << a << endl; //nilai awal 5
    a++; // a = a + 1; lumayan ntar pakai for membantu biar bertahap
    cout << a << endl; //sekarang jadi 6
    cout << "a++ = " << a++ << endl;
    //karena di print dulu baru ditambahkan, maka masih di print nilai yang lama
    cout << a << endl; //sekarang jadi 7 karena tadi di print dulu baru ditambah 1 kan

    int b = 5;
    // preincrement, ditambahkan dulu baru di print
    cout << "Preincrement" << endl; //nilai awal 5
    cout << b << endl; //nilai awal 5
    ++b; // a = a + 1; lumayan ntar pakai for membantu biar bertahap
    cout << b << endl; //sekarang jadi 6, sekilas sama saja tapi
    cout << "++b = " << ++b << endl; //sekarang jadi 7, baru dia print/tampilkan.

    // Decrement jugaa kaya gitu.
    return 0;
}
