#include <iostream>
using namespace std;
// Fibonacci standart 1, 1, 2, 3, 5, 8, 13 dst.

int Fibonacci (int n) {
    //n == 0 karena bisa aja jika n = 2 lalu dikurangi 2 = 0
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
