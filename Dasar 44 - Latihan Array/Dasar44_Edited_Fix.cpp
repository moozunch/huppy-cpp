#include <iostream>
#include <array>
using namespace std;

int main() {
    system("cls");
    int nsiswa;
    array<int, 100> nilaisiswa;
    array<int, 100> totalnilai;
    
    cout << "Banyak mahasiswa: ";
    cin >> nsiswa;

    for (int i = 0; i < nsiswa; i++) {
        cout << "Masukkan nilai Mahasiswa ke-" << i << " = ";
        cin >> nilaisiswa[i];

        int nilaitambahan = 3;
        totalnilai[i] = min(nilaisiswa[i] + nilaitambahan, 100); // ada batas nya dia diambil minimum nya saja, jika lebih dari 100.
    }

    // rate banyak nilai
    array<int, 10> raten = {0}; // {0} = nilai inisialisasi

    for (int i = 0; i < nsiswa; i++) {
        if (totalnilai[i] <= 10)
            raten[0]++;
        else if (totalnilai[i] <= 20)
            raten[1]++;
        else if (totalnilai[i] <= 30)
            raten[2]++;
        else if (totalnilai[i] <= 40)
            raten[3]++;
        else if (totalnilai[i] <= 50)
            raten[4]++;
        else if (totalnilai[i] <= 60)
            raten[5]++;
        else if (totalnilai[i] <= 70)
            raten[6]++;
        else if (totalnilai[i] <= 80)
            raten[7]++;
        else if (totalnilai[i] <= 90)
            raten[8]++;
        else
            raten[9]++;
    }

    // Tampilkan grafik
    cout << "Grafik Nilai" << endl;
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Nilai " << i * 10 << " - " << (i + 1) * 10 - 1 << ": "; // misal i=1, nilai 10 - 19: 
        for (int j = 0; j < raten[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
