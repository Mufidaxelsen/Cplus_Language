// Dalam File ini yang tereksekusi pertama kali adalam "MAIN"
#include <iostream>
using namespace std;
// int xxx () {
//     std::cout << 'Hallo Lintangg';     // String Type Data
//     return 0;
// }

// Fungsi Contoh Pertama
int zzz () {
    std::cout << false;
    return 0;
}

// Fungsi xxx: mencetak nilai boolean dalam bentuk angka (0 untuk false)
// Fungsi Kedua: mencetak boolean
int xxx() {
    cout << "Output dari fungsi xxx(): " << false << endl; 
    return 0;
}

// Fungsi tambahan: mengubah boolean menjadi teks "true"/"false"
// Fungsi Ketiga: Cetak Boolean Sebagai Teks
void tampilkanBoolean(bool nilai) {
    if (nilai) {
        cout << "Nilai boolean ini adalah: true" << endl;
    } else {
        cout << "Nilai boolean ini adalah: false" << endl;
    }
}

int main() {
    // Memanggil fungsi zzz()
    zzz();
    cout << endl;

    // Memanggil fungsi xxx()
    xxx();
    cout << endl;

    // Menggunakan fungsi baru
    bool contohNilai = false;
    tampilkanBoolean(contohNilai);

    return 0;
}


// Tugas pertama dari bang dea afrizal = membuat suatu output dengan hasil berikut | hello, yeah "2 enter", nama kalian siapa 
