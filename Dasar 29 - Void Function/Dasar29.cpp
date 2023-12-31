#include <iostream>
using namespace std;
// Kalau di pascal mirip sama procedure. Gaperlu pakai function.

int kuadrat (int x) {
    int y;
    y = x * x;
    return y; //menghasilkan nilai y jika kita panggil function kuadrat
}

//void : dia tipe data dan ga perlu return.
// void namafungsi (input) {} //parameter juga bisa dipakek but issall pilihan kamu sendiri.
void tampilkan (int input) {
    cout << input << endl;
} // contoh fungsi simple agar kita ga perlu pakai cout terus menerus untuk menampilkan sesuatu.

int main () {
    system ("cls");
    
    int angka, hasil; 
    cout << "Masukkan angka yang ingin dikuadratkan: ";
    cin >> angka;
    //cout << "Hasil: " <<kuadrat (angka); di program sebelumnya kita pakai ini untuk menampilkan hasil return
    // Mari gabungkan dengan void dan return.
    hasil = kuadrat (angka); //setelah dikerjakan function kuadrat akan direturn hasilnya ke variabel hasil (return)
    tampilkan(hasil); //hasilnya akan ditampilkan dengan function void.

    return 0;
}
