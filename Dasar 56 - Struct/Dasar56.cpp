#include <iostream>
#include <string>
using namespace std;
// Struct sebuah tipe data yang dibentuk dari beberapa tipe data
// Mirip record di pascal

/* jeruk = buah
jeruk.warna
jerut.berat
jeruk.rasa
jeruk.harga */
struct buah {
    string warna;
    float berat;
    string rasa;
    int harga;
};


int main() {
// int a; kan biasa deklarasi variabel gini, tipe data dulu baru nama variable dan initial value.
    buah apel;
    apel.warna = "Merah";
    apel.berat = 0.80;
    apel.rasa = "Manis Madu";
    apel.harga = 8000;

    cout << "Warna apel      : " << apel.warna << endl;
    cout << "Berat apel(kg)  : " << apel.berat << endl;
    cout << "Rasa apel       : " << apel.rasa << endl;
    cout << "Harga apel      : " << apel.harga << endl;

    cout << endl;

    buah jeruk;
    jeruk.warna = "Orange";
    jeruk.berat = 0.80;
    jeruk.rasa = "Manis Asem";
    jeruk.harga = 4000;

    cout << "Warna jeruk     : " << jeruk.warna << endl;
    cout << "Berat jeruk(kg) : " << jeruk.berat << endl;
    cout << "Rasa jeruk      : " << jeruk.rasa << endl;
    cout << "Harga jeruk     : " << jeruk.harga << endl;

  // Ini ngebantu banget buat pengelompokan dengan yang diisi adalah hal hal yang sama terus, misal untuk id mahasiswa datanya ada nama, nim, tanggal masuk dan tanggal berakhir, datanya itu itu aja kan untuk setiap mahasiswanya, jadi daripada declare ulang satu satu.


    return 0;
}
