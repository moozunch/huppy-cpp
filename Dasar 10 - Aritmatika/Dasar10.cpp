#include <iostream>
using namespace std;
//operator aritmatika matematika simple
// +, -, *, /, % 


int main() {
    int a,b;
    float c;
    a = 10;
    b = 2;
    c = 3;
    // 1. operator penjumlahan (+).
    cout << a << " + " << b << " = "<< a + b << endl;
    // 2. operator pengurangan (-).
    cout << a << " - " << b << " = "<< a - b << endl;
    // 3. operator perkalian (*).
    cout << a << " * " << b << " = "<< a * b << endl;
    // 4. operator pembagian (/).
    cout << a << " / " << b << " = "<< a / b << endl; 
    //kalau mau pembagian hasilnya berkoma maka salah satu nilai variabel harus bertipe float
    cout << a << " / " << c << " = "<< a / c << endl;
    // 5. operator modulus (%). modulus gabisa antara float dan integer.
    cout << a << " % " << b << " = "<< a % b << endl;
    
    // tetap berlaku urutan eksekusi kali dan bagi deluan kecuali diberikan tanda kurung.
    return 0;
}
