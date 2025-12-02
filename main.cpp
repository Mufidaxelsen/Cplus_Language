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

    // Fitur tambahan: cek status umur
    if (umur < 12) {
        cout << "Kamu masih kecil, jangan lupa belajar ya!" << endl;
    } else if (umur < 18) {
        cout << "Kamu remaja, semangat mengejar impianmu!" << endl;
    } else if (umur < 30) {
        cout << "Kamu sudah dewasa muda, terus berkembang!" << endl;
    } else {
        cout << "Kamu sudah berpengalaman, terus memberi inspirasi!" << endl;
    }

    cout << endl;

    // Fitur tambahan: menghitung tahun lahir
    int tahunSekarang = 2025;
    int tahunLahir = tahunSekarang - umur;

    cout << "Oh iya, berarti kamu lahir sekitar tahun " << tahunLahir << "." << endl;

    cout << "\nTerima kasih sudah mencoba program sederhana ini :)" << endl;
    
    return 0;
}





// Fungsi "endl" = Untuk memberi space dengan kalimat
// jika memakai "USING NAMESPACE STD;" maka std nya sudah dinyatakan global/  keseluruhan dalam file ini

