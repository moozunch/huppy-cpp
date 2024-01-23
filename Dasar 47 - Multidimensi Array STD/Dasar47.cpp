#include <iostream>
#include <array>
using namespace std;
// Multidimensi array std library
const int kolom = 3; // kolom 0-2
const int baris = 2; // baris 0-1
void printarray (array <array <int, kolom>, baris> &nilaiArray) {
    for (array <int, kolom> vectorBaris: nilaiArray) {
        cout << "[ ";
        for (int nilaiKolom: vectorBaris) {
            cout << nilaiKolom << " ";
        }
        cout << "]"<< endl;
    }
}

int main () {
    system ("cls");
    // array <int, 10> nilaimtd = {} // normally seperti ini
    array <array <int, kolom>, baris> nilaimtd = {0,1,2,3,4,5}; //
    cout << nilaimtd[0][0] << " ";
    cout << nilaimtd[0][1] << " ";
    cout << nilaimtd[0][2] << endl;
    cout << nilaimtd[1][0] << " ";
    cout << nilaimtd[1][1] << " ";
    cout << nilaimtd[1][2] << endl;

    cout << "Print dengan for Void" << endl;
    printarray (nilaimtd);
    
    return 0;
}
