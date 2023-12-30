#include <iostream>
#include <cmath>
using namespace std;
//program bakal terus keacak sampai terjadi sesuatu

int main () {
    system ("cls");

    char yn; //ingat char petik satu
    while (true) {
        cout << "Lanjut lempar (y/n)? ";
        cin >> yn;
        if (yn == 'y') {
            cout << 1 + (rand () % 6 ) << endl;
        }
        else { break; 
        }
    } 

    return 0;
}
