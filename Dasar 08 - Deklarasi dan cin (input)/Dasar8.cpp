#include <iostream>

int main() {
    // int a = 1; //inisialisasi bukan deklarasi
    //cara deklarasi: (kalau di pascal deklarasi diatas setelah unit bukan di main program).
    int a, b; //deklarasi doang ingat, belum ada nilai. Bakal membantu saat penulisan kode yang banyak dan variabel tersebut dipakai berulang kali. 
    a = 1;
    b = a + 2; //baru diisi
    std::cout <<"Nilai a: ";
    std::cout <<a << std::endl;
    std::cout <<"Nilai b: ";
    std::cout <<b;
    return 0;
}
