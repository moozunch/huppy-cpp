#include <iostream>
#include <string>
using namespace std;

// ingat arrray kumpulan data dengan tipe data yang sama
// Define the size of the array and can't be changed
int main () {
//  int name[size] = content ;
    string day[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"}; //have content
    cout << day; // yang keluar hanya memory location 
    day[2] = "selasa"; //changing the 2nd content in the array which is tuesday

    int size;
    size = 8;
    // the data type harus dibuat di array nya, ga bisa di declare diatas karena bukan variable
    int number[size + 1]; //doesn't have any content yet
    number[0] = 1; // notice that array penomorannya start from 0, jadi kalau isi 9 = 0 sampai 8
    for (int i = 1; i<=size; i++) {
        number[i] = i;
        cout << number[i] << endl;
    }

    for (int j = 0; j<=6; j++) {
        cout << day[j];
        if (j != 6) {
            cout << ", ";
        }
    }

    // also could make dynamic array
    int nomor[] = {1, 2, 3, 4, 5};
    //if it does have content the array will automatically have size of 5
    cout << "Size array number in byte:" << sizeof(number) << endl; //output in byte, how many byte uses
    //to figure out how long the array length is we could divide it by the byte of the data types of array
    //or the other way is divide it by the size of one content in the array as it supposed to be all have the same size.
    cout << "Size isi array number:" << sizeof(number)/sizeof(number[0]);

    return 0;
}
