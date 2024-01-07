#include <iostream>
#include <array>
using namespace std;

// Kalau kita pakai array bawaan c++, kan dia yang dinamis 
// otomatis batasnya tidak diketahui dan sulit untuk looping karena perlu tahu batas.
// Looping khusus array:

int main () {
    system ("cls");
  // Pembuatan array dengan standart library
   array <int, 13>arrNilai = {00,11,22,33,44,55,66,77,88,99,100,111,122};
  
   // looping untuk array
   for (int nilai : arrNilai) {
        // masih sama ya nilai itu seperti indeks juga
        // cout << nilai << endl;
        // ambil alamat si var nilai bukan array yang sebenarnya makanya sama.
        cout << "Address " << &nilai << " nilainya " << nilai <<  endl; // alamatnya konstan
        nilai = 1; // tidak merubah apapun, jadi gimana cara memanipulasinya?
   }
   cout << endl;
    // Cara memanipulasi isi array, pakai refrencing ubah langsung kedalam datanya
   for (int &nilairef : arrNilai) {
        nilairef *= 2;
        cout << "Address " << &nilairef << " nilainya " << nilairef <<  endl; // dia mengambil alamat sebenarnya dari array.
   }
   cout << endl;
   // Sekarang kita cek apakah nilai array nya berubah
   for (int &nilairef : arrNilai) {
        cout << "Address " << &nilairef << " nilainya " << nilairef <<  endl; // dia mengambil alamat sebenarnya dari array.
   }
    
    return 0;
}
