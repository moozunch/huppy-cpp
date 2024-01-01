#include <iostream>
using namespace std;
// prototype fungsi


// Fungsi sebelumnya, kan kita harus taro ini fungsi diatas sebelum fungsi main agar program main tau ni function exist gitu, seperti deklarasi variabel kan harus deklarasi dulu baru isi.
double luas (double panjang, double lebar) {
    return panjang * lebar; //ingat function return namanya bisa dipakai sebagai variabel, dalam kasus di cpp langsung seperti ini
}
// maka agar function/subprogrm bisa ditulis dibawah main program kita perlu prototype.
// check program sebelah.

int main () {
    system ("cls");
    int panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    cout << luas (panjang,lebar) << endl;

    return 0;
}
