#include <iostream>
using namespace std;
// Deret Fibonacci
// f_n = f_n1 + f_n2

int main () {
    system ("cls");
    int a, fn1, fn2, fn;
    cout << "Masukkan batas bilangan: ";
    cin >> a;

    //inisialisasi nilai awal
    cout << "Masukkan deret pertama: ";
    cin >> fn1;
    cout << "Masukkan deret kedua: ";
    cin >> fn2;
    cout << "======================" << endl;

    cout << fn1 << ", " << fn2 << ", ";

    for (int i = 1; i <= a; i++) {
        fn = fn1 + fn2;
        cout << fn;
        //selanjutnya mari kita tukar tempat
        fn1 = fn2;
        fn2 = fn;
        //buat tanda komanya ilang di akhir
        if (i < a) {
            cout << ", ";
        }
    }
    
    return 0;
}
