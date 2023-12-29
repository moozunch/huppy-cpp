#include <iostream>
using namespace std;
// do while looping

int main () {
    system ("cls");
    // while jalan ketika true
    // do while berjalan trus sampapi ada syarat yang true agar dia berhenti.
    // do while di jalankan dulu baru di periksa syarat, seperti post increment.
    // while bisa aja aksi nya ga jalan sama sekali tergantung syarat, kalau do while minimal sekali jalan karena habis itu baru di cek syarat.
    cout << "loop pertama" << endl;
    int a = 0; 
    do {
        cout << "Perulangan ke-" << a << endl;
        a++;
    } while (a <= 5);
    // jalan dulu baru di cek syarat while
    cout << "loop kedua" << endl;
    int b = 1; 
    do {
        cout << "Perulangan ke-" << b << endl;
        b++;
    } while (b < 0); //seharusnya ga jalan apa-apa tapi ingat do while jalan dulu sekali baru di cek syarat.
    

    return 0;
}
