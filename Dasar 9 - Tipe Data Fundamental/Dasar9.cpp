#include <iostream>
#include <limits>
// tipe data ada banyak tapi today we'll cover up about the fundamental one.
// 1 byte = 8 bit. dengan bit paling depan kiri (MSB) merupakan sign bit.

int main() {
    std::cout << "============Integer===================== " << std::endl;
    // 1. Integer (-217483648 sampai 217483647 //translate semua 4 byte = 8(1 byte = 8 bit) * 4 = 32 bit)
    int a = -1;
    std::cout << a << " merupakan tipe Integer memakan Memory: ";
    std::cout << sizeof (a) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe integer : " << std::numeric_limits<int>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe integer : " << std::numeric_limits<int>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    // return 0; //notice pas ada ini yang dibawahnya gabakal ke run.

    std::cout << "============Long Integer===================== " << std::endl;
    // 1.a Long Integer 
    long b = 6;
    std::cout << b << " merupakan tipe Integer Long memakan Memory: ";
    std::cout << sizeof (b) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe long integer : " << std::numeric_limits<long>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe long integer : " << std::numeric_limits<long>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.

    std::cout << "============short Integer===================== " << std::endl;
    // 1.b short Integer 
    short c = 2;
    std::cout << c << " merupakan tipe Integer short memakan Memory: ";
    std::cout << sizeof (c) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe short integer : " << std::numeric_limits<short>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe short integer : " << std::numeric_limits<short>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    std::cout << "============Unsigned Integer===================== " << std::endl;
    // 1.c Unsigned Integer 
    unsigned int h = 3; //kalau kita input negatif akan otomatis jadi dibalikkan nilainya
    std::cout << h << " merupakan tipe Integer memakan Memory: ";
    std::cout << sizeof (h) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe Unsigned integer : " << std::numeric_limits<unsigned int>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe Unsigned integer : " << std::numeric_limits<unsigned int>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    //ingat kita mau buat program seminimum sehemat munngkin, jadi kalau perhitungannya kecil pakai aja short.
    //liat aja reference documentation for more spesicific tipe data.
    
    std::cout << "============Float===================== " << std::endl;
    // 2. Float, tipe berkoma seperti real di pascal
    float d = 1.0;
    std::cout << d << " merupakan tipe Float memakan Memory: ";
    std::cout << sizeof (d) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe Float : " << std::numeric_limits<float>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe Float : " << std::numeric_limits<float>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    std::cout << "============Double===================== " << std::endl;
    // 2.a Double, tipe berkoma seperti real di pascal
    double e = 1.0; //untuk syntax penting ya uppercase lowercase
    std::cout << e << " merupakan tipe Double memakan Memory: ";
    std::cout << sizeof (e) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe Double : " << std::numeric_limits<double>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe Double : " << std::numeric_limits<double>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    std::cout << "============Char===================== " << std::endl;
    // 3. char 
    char f = 'A'; //char pakai petik satu
    std::cout << f << " merupakan tipe char memakan Memory: ";
    std::cout << sizeof (f) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe Char : " << std::numeric_limits<char>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe Char : " << std::numeric_limits<char>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    std::cout << "============Boolean===================== " << std::endl;
    // 4. Boolean (False / True) aslinya hanya memakan memori 1 bit, tapi di memori cuma kenal byte
    bool g = true; 
    std::cout << g << " merupakan tipe boolean memakan Memory: ";
    std::cout << sizeof (g) << " Byte" << std::endl; //lihat berapa banyak dia makan memory
    std::cout <<"Minimum tipe boolean : " << std::numeric_limits<bool>::min() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    std::cout <<"Maximum tipe boolean : " << std::numeric_limits<bool>::max() << " Byte" << std::endl; //lihat berapa banyak dia makan memory.
    
    //string tidak masuk karena string bukan tipe data fundamental tapi tipe data yang banyak character.
    return 0;
    //SEE YOU FOLKS! HAPPY STUDY!
}
