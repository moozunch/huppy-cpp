#include <iostream>
using namespace std;

int main () {
    system ("cls");
    //deklarasi
    int x, satuint, duaint;
    float satu, dua, hasil;

    //logika Kalkulator
    cout << "Program Kalkulator Sederhana \n" << "=============================" << endl;
    cout << "Pilihan" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Sisa hasil bagi" << endl;
    cout << "Masukkan nomor pilihan yang ingin dilakukan: ";
    cin >> x;
    cout << "Masukkan angka pertama: ";
    cin >> satu;
    cout << "Masukkan angka kedua: ";
    cin >> dua;

    switch (x) {
        case 1: 
            hasil = satu + dua;
            cout << satu << " + " << dua << " = ";
            break;
        case 2: 
            hasil = satu - dua;
            cout << satu << " - " << dua << " = ";
            break;
        case 3: 
            hasil = satu * dua;
            cout << satu << " * " << dua << " = ";
            break;
        case 4: 
            hasil = satu / dua;
            cout << satu << " / " << dua << " = ";
            break;
        case 5: 
            satuint = static_cast<int>(satu); //ubah float to integer, ingat mod gabisa untuk float.
            duaint = static_cast<int>(dua); //ubah float to integer, ingat mod gabisa untuk float.
            hasil = satuint % duaint;
            cout << satuint << " mod " << dua << " = ";
            break;
    }

    cout << hasil << endl;
    return 0;
}
