#include <iostream>
using namespace std;
// operator logika: and, or , not.
// perlu tanda kurung juga
// lebih ke cara pemakaian aja, untuk teori yk you've already learn this.

int main() {
    cout << "Operator Logika \n" << "================" << endl;
    int a, b;
    bool hasil;
    a = 21;
    b = 12;
    // 1. Operator Konjungsi (and atau && ) 
    cout << "(a == 21) and (b == 12) adalah " << ((a == 21) and (b == 12)) << endl; 
    cout << "(a == 21) && (b == 12) adalah " << ((a == 21) && (b == 12)) << endl; 
    
    // 2. Operator Disjungsi (or atau ||)
    hasil = (a == 12) || (b == 21); //false or false = false = 0
    cout << "(a == 12) or (b == 21) adalah " << hasil << endl; 

    //3. Operator negasi (not atau !)
    hasil = (a == 21); //seharusnya hasilnya adalah true kan
    cout << a << " == " << b << " adalah " << hasil << endl; 
    hasil = !(a == 21); //hasilnya akan di negasikan
    cout << "!(negasi) " << a << " == " << b << " adalah " << hasil << endl; 
    
    // ingat sequence matter
    return 0;
}
