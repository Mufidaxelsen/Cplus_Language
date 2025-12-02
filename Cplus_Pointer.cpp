#include <iostream>
using namespace std;

int main() {
    int angka = 10;       // variabel biasa
    int* ptr = &angka;    // pointer menyimpan alamat variabel angka

    cout << "Nilai angka: " << angka << endl;
    cout << "Alamat angka (ptr): " << ptr << endl;
    cout << "Nilai lewat pointer (*ptr): " << *ptr << endl;

    return 0;
}