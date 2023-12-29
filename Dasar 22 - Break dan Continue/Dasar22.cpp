#include <iostream>
using namespace std;

int main () {
    system ("cls");
    //1. Break bakal berhentiin
    cout << "Break" << endl;
    for (int i=1; i >= 0; i++) { //expect looping infinity
        cout << i << endl;
        if (i >= 20) {
            break;}
    }
    cout << " " << endl; //enter
    // continue itu skip 
    cout << "Continue" << endl;
    for (int i=1; i <= 20; i++) { //expect looping infinity
        if (i % 2 == 0) {
            continue;} // yang hasilnya genap akan di skip
        cout << i << endl; // jadi hanya menampilkan yang ganjil.
    }
    // bisa juga untuk di while tapi hati-hati (taro increment dulu baru perintah yang mau di skip).
    return 0;
}
