#include <iostream>
using namespace std;
//scope pada variabel: lokal dan global.

// Global Scope
int x = 10; //variabel global yang bisa dipakai didalam program main dan juga subprogram,

int subprogram () {
    return x;
}

int main () {
    system ("cls");
    cout << "1. Scope Variabel Global: " << x << endl;
    cout << "2. Scope Global subprogram: " << subprogram () << endl; // x masih 10
    int x = 5; //diperbaharui nilainya dan variabel lokal karena perubahan hanya di main program, di function tetap 10.
    cout << "3. Scope Variabel lokal main: "<< x << endl;
    cout << "Global: "<< subprogram () << endl; // x masih 10 karena perubahan var lokal hanya berpengaruh di program itu tidak diluarnya seperti sub program dan begitupun sebaliknya.
    // setiap perubahan hanya membuatnya menjdi perubhaan lokal.
    // intinya setiap variabel yang ditulis di tiap tiap program hanya akan membuat dia menjadi var lokal dan perubahan hanya bisa dipakek di program itu keculali variable dibuat di semesta.
     
    return 0;
}
