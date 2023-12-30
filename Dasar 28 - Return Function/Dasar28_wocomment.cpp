#include <iostream>
using namespace std;

int kuadrat (int x) {
    int y;
    y = x * x;
    return y; //menghasilkan nilai y jika kita panggil function kuadrat
}

int main () {
    system ("cls");

    int angka; 
    cout << "Masukkan angka yang ingin dikuadratkan: ";
    cin >> angka;
    cout << "Hasil: " <<kuadrat (angka);
    
    return 0; 
}
