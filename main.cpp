// INFO LEBIH LANJUT = C++ Referencies

// IOstream =  I -> Input   
// IOstream =  O -> Output  
#include <iostream>
using namespace std;            // std = Library bawaan dari C++
                                // cout = c out
int main () {                   // Dipanggil dengan = :: 
    cout << "Halo adik rosaaa" << endl << "Cuteness" 
    << endl << endl << endl << "Muhammad Mufid Azhar";

    // Deklarasi variabel untuk interaksi
    string nama;
    int umur;

    // Input nama pengguna
    cout << "Siapa namamu? ";
    getline(cin, nama);  // Mengambil input lengkap (termasuk spasi)

    // Input umur pengguna
    cout << "Berapa umurmu? ";
    cin >> umur;

    cout << endl;

    // Menampilkan hasil input
    cout << "Halo, " << nama << "!" << endl;
    cout << "Wah, umurmu " << umur << " tahun ya." << endl;
    
    return 0;
}





// Fungsi "endl" = Untuk memberi space dengan kalimat
// jika memakai "USING NAMESPACE STD;" maka std nya sudah dinyatakan global/  keseluruhan dalam file ini
