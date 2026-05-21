#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    int jumlah;

    cout << "Masukan Jumlah Data: ";
    cin >> jumlah;
    cin.ignore();

    Mahasiswa mhs[jumlah]; 

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMasukan Data Mahasiswa Ke-" << i + 1 << endl;
        cout << "Masukan Nama : ";
        getline(cin, mhs[i].nama);
        cout << "Masukan NIM  : ";
        cin >> mhs[i].nim;
        cout << "Masukan IPK  : ";
        cin >> mhs[i].ipk;
        cin.ignore();
    }

    // LOGIKA MENCARI IPK TERBESAR & TERKECIL
    // Inisialisasi awal: anggap mahasiswa pertama adalah yang terbesar & terkecil
    int indeksTerbesar = 0;
    int indeksTerkecil = 0;

    for (int i = 1; i < jumlah; i++) {
        // Cek Terbesar
        if (mhs[i].ipk > mhs[indeksTerbesar].ipk) {
            indeksTerbesar = i;
        }
        // Cek Terkecil
        if (mhs[i].ipk < mhs[indeksTerkecil].ipk) {
            indeksTerkecil = i;
        }
    }

    // Output Hasil
    cout << "\n========== ANALISIS DATA ==========" << endl;
    cout << "IPK Terbesar: " << mhs[indeksTerbesar].ipk 
         << " (Oleh: " << mhs[indeksTerbesar].nama << ")" << endl;
         
    cout << "IPK Terkecil: " << mhs[indeksTerkecil].ipk 
         << " (Oleh: " << mhs[indeksTerkecil].nama << ")" << endl;

    return 0;
}