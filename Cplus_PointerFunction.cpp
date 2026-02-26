// Ini Pointer dan Fungsi
#include <iostream>
using namespace std;

void ubah(int* p) {
    *p = 999;  
}

int main() {
    int nilai = 50;
    ubah(&nilai);

    cout << "Nilai setelah diubah: " << nilai << endl;
}