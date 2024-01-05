#include <iostream>
#include <array>
using namespace std;

int main() {
    system ("cls");
    int nsiswa;
    array < int, 100 > nilaisiswa;
    array < int, 100 > totalnilai;
    cout << "Banyak mahasiswa: ";
    cin >> nsiswa;
    for (int i = 0; i < nsiswa; i++) {
        cout << "Masukkan nilai Mahasiswa ke-" << i << " = ";
        cin >> nilaisiswa[i];
        int nilaitambahan = 3;
        totalnilai[i] = (nilaisiswa [i] + 25);
        // jika nilai lebih dari 100 akan dibuat tetap 100
        if (totalnilai[i] >= 100) {
            totalnilai[i] = 100; 
        }
    }

    // Menampilkan nilai akhir mahasiswa
    for (int i = 0; i < nsiswa; i++) {
        cout << "Nilai akhir Mahasiswa ke-" << i << " = " << totalnilai[i] << endl;
    }
    // rate banyak nilai
    // array < int, 100 > raten;
    int raten0 = 0;
    int raten1 = 0;
    int raten2 = 0;
    int raten3 = 0;
    int raten4 = 0;
    int raten5 = 0;
    int raten6 = 0;
    int raten7 = 0;
    int raten8 = 0;
    int raten9 = 0;
    for (int i = 0; i < nsiswa; i++) {
        // Melakukan pengecekan dari mahasiswa 0
        if (totalnilai[i] <= 10 ) {
            raten0 = raten0 + 1;
            break;
        } else if (totalnilai[i] <= 20 ) {
            raten1 = raten1 + 1;
            break;
        } else if (totalnilai[i] <= 30 ) {
            raten2 = raten2 + 1;
            break;
        } else if (totalnilai[i] <= 40 ) {
            raten3 = raten3 + 1;
            break;
        } else if (totalnilai[i] <= 50 ) {
            raten4 = raten4 + 1;
            break;
        } else if (totalnilai[i] <= 60 ) {
            raten5 = raten5 + 1;
            break;
        } else if (totalnilai[i] <= 70 ) {
            raten6 = raten6 + 1;
            break;
        } else if (totalnilai[i] <= 80 ) {
            raten7 = raten7 + 1;
            break;
        } else if (totalnilai[i] <= 90 ) {
            raten8 = raten8 + 1;
            break;
        } else if (totalnilai[i] <= 100 ) {
            raten9 = raten9 + 1;
            break;
        }
    }
    cout << endl;
    // Tampilkan grafik
    cout << "Grafik Nilai" << endl;
    cout << endl;
    for (int i = 0; i < nsiswa; i++) {
        for (int j = 0; j < raten0; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten1; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten2; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten3; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten4; j++ ) {
            cout << "*";
        }   
        cout << endl;
        for (int j = 0; j < raten5; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten6; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten7; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten8; j++ ) {
            cout << "*";
        }
        cout << endl;
        for (int j = 0; j < raten9; j++ ) {
            cout << "*";
        }
    }
    return 0;
}
