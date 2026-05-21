#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string kelas;
    float nilai;
};

int main () {
    int jumlah; // membuat variabel untuk menentukan jumlah mahasiswa yang di masukan
    cout << "Masukan Jumlah Mahasiswa: ";
    cin >> jumlah;

    Mahasiswa mhs [jumlah]; // "jumlah" mengambil dari nilai yang kita masukan
    int max = 0;
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Masukan Mahasiswa ke " << i + 1 << endl;
        
        cin.ignore();

        cout << "Masukan Nama: ";
        getline (cin, mhs[i].nama);

        cout << "Masukan Nim: ";
        getline (cin,mhs[i].nim);

        cout << "Masukan Kelas: ";
        getline (cin,mhs[i].kelas);

        cout << "Masukan Nilai: ";
        cin >> mhs[i].nilai;

        if (mhs[i].nilai > mhs [max].nilai)
        {
            max = i;
        }
        
    }
    

    cout << "\nNo | NIM       | Nama      | Kelas | Nilai\n";
    cout << "---|-----------|--------|-------|------\n";

    for (int i = 0; i < jumlah; i++)
    {
       cout << i + 1 << "  | "
                << mhs[i].nim << " | "
                << mhs[i].nama << " | "
                << mhs[i].kelas << " | "
                << mhs[i].nilai << endl;
    }
    
    cout << "Mahasiswa dengan nilai tertinggi " << endl;
    cout << "Nama: " << mhs[max].nama << endl;
    cout << "Nim: " << mhs[max].nim << endl;
    cout << "Nilai: " << mhs[max].nilai << endl;
    return 0;
}
