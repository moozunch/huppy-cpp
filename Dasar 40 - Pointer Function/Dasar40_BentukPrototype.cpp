#include <iostream>
using namespace std;
// Fungsi Pointer 

// Deklarasi Prototype, cuma tanda prototype nya saja.
void fungsipointer (int *);
void kuadrat (int *); 

int main () {
    system ("cls");
    int a = 5;
    cout << "Alamat a       : " << &a << endl;
    fungsipointer (&a); 
    kuadrat (&a);
    cout << "Nilai a (kuadrat): " << a << endl;

    return 0;
}

void fungsipointer (int *b) {
    cout << "Alamat b       : " << b << endl; 
    cout << "Isi nilai b    : " << *b << endl; 
}

void kuadrat (int *c){
    
    *c = (*c) * (*c); 
}
