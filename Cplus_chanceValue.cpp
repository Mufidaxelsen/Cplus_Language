#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x;

    *p = 20; // mengubah nilai x melalui pointer
    cout << "Nilai x sekarang: " << x << endl;

    return 0;
}