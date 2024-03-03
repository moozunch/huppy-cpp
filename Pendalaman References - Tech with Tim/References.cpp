#include <iostream>
using namespace std;
// Rederences (&)
// next is sort


int main() {
    // References: adalah nama lain dari sebuah variabel atau alias
    int a = 2;
    int b = a;
    int &c = a; //b is a references of a, so if we modified c we will also modified a, it give access where the a is.
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    // if we change the value for a, the b and c  will follow.
    // but when we change c, if we change the value of c the a will change unlike just your ordinary variabels or b.
    c = 4;
    b = 5;
    cout << "a: " << a << endl;
    cout << "b(variabel biasa): " << b << endl;
    cout << "c(references): " << c << endl;

    // it gives more dynamic access of variable so we can change the value of one variables with another name variable and actually access something inside it.
    // it actually access the value from the address inside the memory.
    cout << "alamat a: " << &a << endl;
    cout << "alamat b: " << &b << endl;
    cout << "alamat c: " << &c << endl;
    // (&) work on variables, untuk cout/nampilin nggak perlu pakai (&), cukup nama variable nya aja, jika pakai (&) untuk cout hanya alamat nya disimpan yang akan tampil. The rules is you need to have initiazles or declare.

    return 0;
}
