#include <iostream>
using namespace std;

int main() {
    system ("cls");

    // Array Multidimensional
    // int array[baris][kolom]={content};
    int arrnilai[2][2] = {10,20,30,40}; //inngat kan dia baris 2 kolom 2 = 2 * 2 = 4
    // cout << arrnilai [0][0] << " " << arrnilai [0][1] << endl; bentuknya gini, makanya dibuat jadi nested for, maka:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arrnilai [i][j];
            if (j < 1) {
                // Karena indeks array dari 0 ke 1 
                cout << ", ";
            }
        } 
        cout << endl;
    }
    return 0;
}
