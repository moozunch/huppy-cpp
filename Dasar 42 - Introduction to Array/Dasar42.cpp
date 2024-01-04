#include <iostream>
using namespace std;
// Array: Kumpulan set data dengan tipe data yang sama.
// Array []
// Indeks dimulai dari 0.

int main () {
    system ("cls");

    // Membuat Array
    // Cara 1: Deklarasi dulu

    int nilai [5]; //ndeklarasi array dengan batas 5 indeks (0-4)
    cout << nilai << endl; // Kalau di-output-kan yang tanpa indeks maka akan tampil alamatnya saja.
    cout << "Alamat indeks 0: "<< &nilai[0] << endl; 
    cout << "Alamat indeks 1: "<< &nilai[1] << endl; 
    cout << "Alamat indeks 2: "<< &nilai[2] << endl; 
    cout << "Alamat indeks 3: "<< &nilai[3] << endl; 
    cout << "Alamat indeks 4: "<< &nilai[4] << endl; 
    // Total jadi ada 5 array dengan indeks sampai 4.

    nilai [0] = 100; 
    nilai [1] = 200; 
    nilai [2] = 300; 
    nilai [3] = 400; 
    nilai [4] = 500; 
    // nilai [5] = 10;
    // nilai [6] = 18;
    cout << "Isi indeks 0: "<< nilai [0] << endl; 
    cout << "Isi indeks 1: "<< nilai [1] << endl; 
    cout << "Isi indeks 2: "<< nilai [2] << endl; 
    cout << "Isi indeks 3: "<< nilai [3] << endl; 
    cout << "Isi indeks 4: "<< nilai [4] << endl; 
    // cout << "Isi indeks 5: "<< nilai[5] << endl; 
    // cout << "Isi indeks 6: "<< nilai[6] << endl; 
    // Bisa bisa aja melewati batas array tapi better not.

    // Cara 2: Langsung assign
    // int welp [5] = {0,1,2,3,4};

    // Untuk mengakses nilai dari address pointer
    cout << endl;
    cout << "Menggunakan Pointer" << endl;
    int *ptr = nilai;
    *(ptr + 2) = 6; // Ambil pointer alamat kedua dan dirumah hasilnya menjadi 6.
    cout << "Isi indeks 2           : "<< nilai [2] << endl;
    // Cara lain dari *(ptr + 2) = 6;
    nilai [2] = 7;
    cout << "Isi indeks 2 (edited)  : "<< nilai [2] << endl;

    cout << endl;
    // Cara mengetahui berapa banyak data/member didalam suatu array karena kan biasanya apalagi kalau dinamis itu dan banyak isinya maka akan susah dicari.
    // Sadly cpp gaada syntax nya seperti length dan set length.
    // Alternatif
    cout << "Ukuran array       : " << sizeof(nilai) << " Byte" << endl; // Hasil dalam byte. 
    //Dengan sizeof itu anggota iostream so supposed to be pakai std.
    // Nah sizeof kan hasilnya dalam byte, tapi ingat coba kita bagi sama tipe datanya kan jadi tar dapat berapa sih membernya toh tipe data nya sama semua.
    cout << "Jumlah member array: " << sizeof(nilai)/sizeof(int) << endl; // 20 byte dibagi 4 bit(integer) = 5 betul kan.
    // Terus cpp juga gaada perintah sorting, jadi kita bakal pakai algoritma komparasi.
    
    return 0;
}
