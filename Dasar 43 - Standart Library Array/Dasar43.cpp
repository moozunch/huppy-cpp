#include <iostream>
// using namespace std;
#include <array> //juga standart library dari std.


int main () {
    system ("cls");
    // int angka;
    // Membuat array dengan standart library
    // 1. array < int, jumlah array> nama array
    // biasa kan buat array kan langunng aja kan assign array [n] gitu, tapi itu assign satu persatu.
    std::array < int, 5 > angka; //array 5 buah integer
    for (int i = 0; i <=  4; i++) {
        std::cout << "Input a number: ";
        std::cin >> angka [i];
        //angka [i] = i; 
        //std::cout << angka [i] << std::endl;
    }
    for (int i = 0; i <=  4; i++) {
        // biar cout nya setelah semua input
        std::cout << " Nilai ke-" << i << "   = " << angka [i] << std::endl;
        std::cout << " Address ke-" << i << " = " << &angka[i] << std::endl;
    }
    // Ukuran array / panjang array
    // dihitung yang kita minta panjang berapa, walaupun kita input sudah lebih tapi ga dihitung dia ga seperti materi sebelumnya yang dihitung dari banyak yang kita tulis (dinamis).
    std::cout << "Panjang array =  " << angka.size() << std::endl;

    // Address awal array
    std::cout << "Address awal  = " << angka.begin() << std::endl;
    // Address akhir array
    std::cout << "Address awal  = " << angka.end() << std::endl;
    // Ambil nilai ke indeks berapa
    std::cout << "Nilai index-2 = " << angka.at(2) << std::endl;
    // for more syntax dari standart library just go ahead and searching.
    

    return 0;
}
