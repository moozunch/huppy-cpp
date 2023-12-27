#include <iostream>
using namespace std; //so i don't have to write std over and over again

int main() {
 
    int a, b, c;
    a = 1;
    b = a + 2; //baru diisi
    cout << a << endl;
    cout <<b << endl;
    cout << "Masukkan sebuah angka: ";
    cin >> c;  //innput maka tanda nya bukan (<<) tapi (>>) artinya kita akan memasukkan sebuah angka ke dalam situ
    //kalau input bisa aja enggak dimasukin ke variabel tetap (<<).
    cout << "Nilai yang anda masukkan adalah: " << c;
    //Di pascal pemisah pakai koma, di cpp pakai << jugak
    return 0; 
}