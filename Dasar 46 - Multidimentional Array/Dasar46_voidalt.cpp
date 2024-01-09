#include <iostream>
using namespace std;

void printingarray (int *ptrarray, int kolom, int baris) {
       int index = 0;
       for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                cout << *(ptrarray + index); // dia indeks nya dijumlah dulu, misal awal 0 lalu di diambil ke pointernya, baru di increment di hitung dulu indeks nya ke 1 baru diambil lah di alamat pointer itu mana yang sesuai.
                index++;
                if (j < 1) {
                    // Karena indeks array dari 0 ke 1 
                cout << ", ";
                }
            } 
        cout << endl;
        }
}

int main() {
    system ("cls");

    // Array Multidimensional
    // int array[baris][kolom]={content};
    const int baris = 2;
    const int kolom = 2; //harus pakai const karena supaya valuenya gabisa diubah ubah, kalau bisa diubah jadi kacau array nya.
    int arrnilai[baris][kolom] = {10,20,30,40}; //inngat kan dia baris 2 kolom 2 = 2 * 2 = 4
    printingarray (*arrnilai, 2, 2);
    return 0;
}
