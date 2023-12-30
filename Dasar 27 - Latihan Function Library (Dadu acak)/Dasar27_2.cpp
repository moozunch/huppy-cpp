#include <iostream>
#include <cstdlib> //ada fungsi random
// Latihan dadu acak

using namespace std;

int main () {
    system ("cls");
    //lumayan jadi dadu portable
    for (int i = 1; i <= 5; i++) {
        cout << 1 + (rand () % 6) << endl; //karena mod 6 ya kalo gak 0 pasti sampai 5 kan, dan dadu ada 6 makanya kita tambah 1.
    }

    return 0;
}