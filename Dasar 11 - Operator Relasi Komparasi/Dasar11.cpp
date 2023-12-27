#include <iostream>
using namespace std;
// 0 = false 1 = true

int main () {
    int a = 10;
    int b = 3;

    cout << "Komparasi/Relational Expression \n" << "===============================" << endl;
    // 1. == (membandingkan dua nilai sebading )
    cout << a << " == " << b << " adalah " << (a == b) << endl; //harus pakai tanda kurung

    // 2. != (tidak sama dengan)
    cout << a << " != " << b << " adalah " << (a != b) << endl;

    // 3. >= (lebih besar sama dengan)
    cout << a << " >= " << b << " adalah " << (a >= b) << endl;
    
    // 4. <= (kurang dari sama dengan)
    cout << a << " <= " << b << " adalah " << (a <= b) << endl;
    
    // bisa juga 
    cout << "komparasi dengan variabel \n";
    bool hasil;
    hasil = (a == b); //harus pakai tanda kurung
    cout << a << " == " << b << " adalah " << hasil << endl; //harus pakai tanda kurung

    return 0;
}
