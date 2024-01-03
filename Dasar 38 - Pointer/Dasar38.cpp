#include <iostream>
using namespace std;
// Pointer
// Kan variabel contain isi kan dan disimpan ke memory dan juga punya address kan untuk suatu saat di akses.
// contoh kita menggunakan variabel yang berbeda namun isi nya sama sja, untuk function {int kuadrat (a) tapi di program utama pakai var beda cout << kuadrat (c)} kan jadinya duplikasi isi walaupun selanjtnya di replace kembali.
// disinlah pointer akan digunakan agar ga perlu duplikasi isi dan var cukup linking alamat.



int main() {
    system ("cls");
    int a = 5; 

    // int a mempunyai nilai dan alamat.
    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << &a << endl;

    //pointer * // merubah alamt a jadi punya nama alamat sendiri
    int *ptra = &a;
    // untuk pemberian nama var pointer dilarang pakai nama var yang sama, contoh *a lagi.
    // pointer b isinya akan jadi alamat isi variable a
    // pointer akan selalu bertipe integer.
    cout << "alamat dari a aka isi pointer a: " << ptra << endl;

    // Null Pointer: isi berupa alamat variabel pointer kosong.
    int *var = nullptr;
    cout << "isi berupa alamat pointer var before: " << var << endl;
    // Bisa juga kita isi setelahnya
    var = &a; //gaperlu di declare lagi
    cout << "isi berupa alamat pointer var after: " << var << endl;


    cout << "Derefrencing" << var << endl;
    // Nah seperti penjelasan sebelumnya sekarang gimana carnya kita 
    // ambil suatu alamat itu untuk diamabil isinya agar untuk pemakaian kedua kali gaperlu duplikasi.
    // Derefrencing : Mengambil data dari sebuah pointer
    // tadi kan kalau ambil alamatnya sebuah pointer tinnggal tulis var nya biasa aja kan
    cout << "isi berupa alamat pointer var after: " << var << endl;
    // kalau ambil isi sebuah pointer tinggal pakai kembali tanda bintngnya: 
    cout << "isi pointer var: " << *var << endl;

    // Intinya Pointer itu berhubungan dengan alamat.

    return 0;
}
