#include <iostream>
#include <queue>
using namespace std;
// Queue First In First Out (FIFO), tumpukan horizontal
//Siapa yang datang deluan dialah yang bakal dilayani duluan

void printqueue(queue<int> namequeue) {
    while (!namequeue.empty()) {
        cout << namequeue.front();
        namequeue.pop();
        if (!namequeue.empty()) {
            cout << ", ";
        }
    }
}

int main() {
    //untuk pendeklarasiaan masih sama mirip vector
    queue<int> namaqueue;
    // 5 Most used function:
// 1. empty - apakah queue nya kosong nggak
    if (namaqueue.empty()) {
        cout << "Queue is empty" << endl;;
    } else {
        cout << "Queue is not empty" << endl;;
    }

// 2. size - to check the filled size of queque
    cout << "Queue size is: " << namaqueue.size() << endl;

// 3. push - to add element to the queque
    namaqueue.push(3); //front of the queue
    namaqueue.push(2);
    namaqueue.push(1);
    namaqueue.push(8); //the last in mean the last in order
    cout << "Queue size is after push: " << namaqueue.size() << endl;

// 4. pop - to delete an element (ofc from the front(FIFO))
    namaqueue.pop(); //nggak perlu diisi karena otomatis yang paling terdepan yang dihapus
    cout << "Queue size is after pop: " << namaqueue.size() << endl;


// 5. front bukan top - Nampilin dari yang paling first/depan (front)
    // write out our queque
    printqueue(namaqueue);
    cout << "\nFirst element is: " << namaqueue.front() << endl;
    cout << "Last element is: " << namaqueue.back() << endl;

    return 0;
}
