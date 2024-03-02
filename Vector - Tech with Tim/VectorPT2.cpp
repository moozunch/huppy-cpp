#include <iostream>
#include <vector>
using namespace std;
//How to erase and add to vector with spesific location not just back

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    // 1. Menambah (v1.insert)
    v1.insert(v1.begin(), 5);
    cout << "awal vector: "<< v1[0] << endl;
    v1.insert(v1.begin(), 7); //insert before 5
    cout << "awal vector: "<< v1[0] << endl;
    // sekarang urutan isinya {7, 5, 1, 2, 3, 4}
    // 1.1. spesific locate
    v1.insert(v1.begin()+1, 6);
    cout << "Posisi index ke-1: " << v1[1] << endl;
    // jadi sekarang urutan isinya {7, 6, 5, 1, 2, 3, 4}

    // 2. Erase
    v1.erase(v1.begin()+2); //expect we delete the third position which is v1[2], which mean we delete 5, jadi sekarang seharusnya v1[1] adalah 1.
    cout << "Posisi index ke-3: " << v1[2] << endl; //expect 1 karena 5 sudah dihapus

    // How to iterating with vectors (pengulangan fungsi)

    // 1. Manual
    cout << "Perulangan dengan cara manual" << endl;
    for (int i = 0; i < v1.size(); i++) {
        //ingat karena dia dimulai dari 0, jadi walapun ada 7 size nya dia akan diitung sampai 6 karena 0 juga terhitung (makanya biasakanlah pakai inisialisasi 0 karena cpp dia pakai 0)
        cout << v1[i] << endl;
    }
    v1.insert(v1.begin(), 8);
    //{8, 7, 6, 1, 2, 3, 4}
    // 2. Automatic
    cout << "Perulangan dengan auto itr" << endl;
    for (auto itr = v1.begin(); itr != v1.end(); itr++ ) {
        // auto iterating dari begin sampai tidak sama dengan akhir, i++.
        cout << *itr << endl; //*itr, derefrence itr
    }

}
