#include <iostream>
using namespace std;
// Program Faktorial

int faktorial (int x) {
    int max;
    if (x == 1) {
        return x;
    } else {
        max = x * faktorial (x-1);
        return max;
    }

}


int main () {
    system ("cls");

    int x;
    cout << "Faktorial dari: ";
    cin >> x;
    cout << "Faktorial dari " << x << " adalah " << faktorial (x) << endl;

    return 0; 
    // Berhasil oye sekali try XD 
}
