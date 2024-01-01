#include <iostream>
using namespace std;
//scope pada variabel: lokal dan global.
// Block Scope

// Global Scope
int x = 10; 

int subprogram () {
    return x;
}

int main () {
    system ("cls");
    cout << "1. Scope Variabel Global: " << x << endl;
    cout << "2. Scope Global subprogram: " << subprogram () << endl; // x masih 10
    int x = 5; 
    // char y = 'woi'; tes aja since aku gatau kalau string gimana.
    cout << "3. Scope Variabel lokal main: "<< x << endl;
    cout << "Global: "<< subprogram () << endl; 
    
    // Block Scope, block maksudnya semua syntax yang ada body nya atau didalam {}, kayak for, if dll.
    // sama perubahann juga hanya terjadi di dalam block itu.
    {
        //block scope
        int x = 1; // deklarasiin dulu tipe nya juga kalau gak dia bakal keubah juga luarnya, gapercaya cek.
        // x = 1; // uncomment this if you wanted to check.
        cout << "Tes block scope (didalam body):  " << x << endl;
    }
    cout << "Tes block scope (diluar body): " << x << endl;

    // Pemakaian Unery (::)
    cout << "Unery: " << ::x << endl; // bakal ambil variable x yang palling jauh which is the global one, before any channges.
    
    return 0;
}