#include <iostream>
#include <stack>
using namespace std;
// Last in First Out (LIFO), tumpukan vertical

void printstack(stack<int> namestack) {
// ingat sub void, nama void lalu parameter dengan (tipe_data nama_param)
    while (!namestack.empty()) {
        //namestack tidak empty
        cout << namestack.top();
        namestack.pop(); 
        if (!namestack.empty()) {
            cout << ", ";
        }
        //bisa aja pakai for untuk loop kan tapi ya pakai size lah
        //alternate way ini jadi selama dia gak kosong bakal ditulis dulu elemennya baru dihapus sehingga sampai elemennya beneran empty, kenapa di void/subprogram? jadi di program utamanya gak bener bener hilang isi stacknya.
    }

}

int main() {
    //untuk pendeklarasiaan masih sama mirip vector
    stack<int>namastack;
    // 5 Most used function: 
// 1. empty - apakah stack nya kosong nggak
    if (namastack.empty()) {
        cout << "Stack is empty" << endl;;
    } else {
        cout << "Stack is not empty" << endl;;
    }

// 2. size - to check the filled size of stack
    cout << "Stack size is: " << namastack.size() << endl;

// 3. push - to add element to the stack
    namastack.push(8); //adding 8 to the stack
    namastack.push(1);
    namastack.push(2);
    namastack.push(3); //the last in
    cout << "Stack size is after push: " << namastack.size() << endl;

// 4. pop - to delete an element (ofc from the back(LIFO))
    namastack.pop(); //nggak perlu diisi karena otomatis yang paling terakhir yang dihapus
    cout << "Stack size is after pop: " << namastack.size() << endl;

    // write out our stck

// 5. top - Nampilin dari yang paling last/terakhir (top)
    //check subprogram void
    printstack(namastack);

    return 0;
}
