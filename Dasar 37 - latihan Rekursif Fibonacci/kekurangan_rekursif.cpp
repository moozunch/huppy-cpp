#include <iostream>
using namespace std;
// Fibonacci standart 1, 1, 2, 3, 5, 8, 13 dst.

int Fibonacci (int n) {
    cout <<" Fungsi Perulangan ke-" << n << endl;
    // setelah di compile liat, untuk mencari perulangan cuma 3x aja perlu perulangan sampai berapa kali
    // jadi tidakk efektif dan logikanya juga ribet, bayangin mencari yang ke-1000 Berapa perulangan di check itu dan hasilnya keluar sangat lama.
    // Ingat tugas kita sebgai programmer untuk membuat sesuatu, lebih mudah dan less effort kalau bisa.
    if (( n == 0) || (n == 1)) {
        return n;
    } else {
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }

}

int main () {
    system ("cls");
    int woops;
    cout << "Mencari bilangan Fibonacci ke-: ";
    cin >> woops;

    cout << "Hasilnya adalah: " << Fibonacci (woops);

    return 0;
}