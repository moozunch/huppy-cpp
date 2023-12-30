#include <iostream> 
#include <cmath>
using namespace std;
// Fungsi atau Function atau Method
// F(x) = x + 5, maka akan dilakukan operasi dan ditampilkan outputnya di F(x) kan
// jadi misal x = 2, maka F(2) = 2 + 5 = 7, nah macam inilah x itu disebut sebagai parameter.
// Dan kita juga mau kan sebuah program yang ngulang sesuatu yang sama yang dipakai berulang kali apalagi kalok panjang kan
// makanya Function hadir.
// actually iostream isi fungsi fungsi jugak bawaannya C++
// termasuklah fungsi fungsi itu library library.

/*
library cmath : referensi www.cppreference.com
ceil(x) 	<- pembulatan ke atas
cos(x) 		<- cosinus
exp(x) 		<- eksponen
fabs(x) 	<- nilai absolut dalam float
floor(x) 	<- pembulatan ke bawah
fmod(x) 	<- modulus dalam float
log(x) 		<- logaritma dengan basis natural
log10(x) 	<- logaritma dengan basis 10
pow(x,y) 	<- x pangkat y
sin(x) 		<- sinus
sqrt(x) 	<- akar kuadrat
tan(x) 		<- tangen
*/

int main () {
    system ("cls");
    int x;
    cout << "Akar dari x dengan x: ";
    cin >> x;
    cout << " = " << floor(sqrt(x));
    return 0;
}
