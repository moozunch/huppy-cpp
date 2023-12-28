#include <iostream>

// printing pada console, printing output

// entry point atau program utama yang dijalanin deluan
int main() { // ({)seperti begin
    //start of body
    std:: cout <<"halo" << std::endl; // statement 1, setiap akhir statement pakai titik koma
    std:: cout <<"semua"; // notice tanpa endl maka outputnya akan seperti perintah write pada pascal. 
    std:: cout <<" sayang-sayangku!" << std::endl;
    std:: cout <<"selamat malam \n"; //tanpa endl tapi output selanjutnya di line selanjutnya
    std:: cout <<"wahai manusia XD" << std::endl;


    return 0;

    /* 1. cout ini diambil dari standart function (std) dimana std only exist when iostream included.
       2. (<< pernyataan <<) operator of insertion
       3. endl : endline, macem writeln di pascal gitu statement output selanjutnya di next line, merupakan bagian dari library standart juga.
       4. Output cout (console output)
       5. Input cin (console input). get itu untuk ambil input enter, not anything else.
       6. return 0; supaya dia ngasih tau kalau nanti ada error maka akan dikasih tau error nya ada dih program main
       7. another way tanpa endl agar output statement selanjutnya ditampilkan di next line adalah 
       menggunakan \n di dalamm string.
       8. didalam "halo" tanda kutip dua adalah string/teks.
       9. di c++ indent juga masih belum terlalu penting in this stage, we'll later find out it it's really matter.
    */
}
