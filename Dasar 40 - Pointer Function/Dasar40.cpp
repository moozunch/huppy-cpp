#include <iostream>
using namespace std;
// Fungsi Pointer 
// Jadi pointer ini dia untuk mengambil alamat untuk kemudian di sharing alamatnya dan juga content nya.

// Buat fungsi mau pakai pointer pakai void aja karena kita mau ambil isinya dari alamatnya (gaperlu return).
void fungsipointer (int *b) {
    cout << "Alamat b       : " << b << endl; //ingat di pointer kebalik sama var biasa, yang b aja malah yang isinya alamat.
    cout << "Isi nilai b    : " << *b << endl; // dan isinya, derefrencing
} 

void kuadrat (int *c){
    // Mau kuadratin value dari pointer (content nya saja).
    *c = (*c) * (*c); //ingat content pointer itu yang ada tanda pointernya.
}   // Jadi pointer ini dia untuk mengambil alamat untuk kemudian di sharing alamatnya dan juga content nya.

int main () {
    system ("cls");
    int a = 5;
    cout << "Alamat a       : " << &a << endl;
    fungsipointer (&a); // Fungsi dengan input alamat pointer.
    // Jadi cukup kirim alamat nya saja sudah cukup membuat fungsi menngerti isi dan alamatnya.
    kuadrat (&a);
    cout << "Nilai a (kuadrat): " << a << endl;
    // Nah loh dia langsung otomatis kuadrat, karena yang diubah langsung ke alamatnya.


    return 0;
}
