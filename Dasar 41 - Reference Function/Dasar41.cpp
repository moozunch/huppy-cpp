#include <iostream>
using namespace std;
// Fungsi dengan reference

void fungsi (int &b) {
    // int &b = a; Tidak perlu declare lagi
    cout << "alamat b   : " << &b << endl; 
    cout << "nilai b    : " << b << endl; 
    // ubah nilai
    b = 60;
    cout << "alamat b   : " << &b << endl; 
    cout << "nilai b    : " << b << endl; 
}

void kuadrat (int &angka) {
    angka = angka * angka;
}

int main() {
    system ("cls");
    int a = 5;
    cout << "alamat a   : " << &a << endl; // anw ingat inituh bukan pointer, pointer tuh when pakai *
    cout << "nilai a    : " << a << endl; 
    // Reference, kita pindahin ke fungsi
    // int &b = a;
    // cout << "alamat b: " << &b << ; 
    // cout << "nilai b: " << b << ; 
    fungsi (a); // kalau di pointer kita masukin alamatnya.
    cout << "nilai a    : " << a << endl; // setelah b di modif maka a juga akan ikut.
    kuadrat (a);
    cout << "nilai a    : " << a << endl; // setelah b di modif maka a juga akan ikut.
    
    // Much neat than pointer
    //so kesimpulan: Pointer kita main di alamatnya, reference kita main di nilainya tapi tetap dua duanya tentang play with address.
    return 0;
}
