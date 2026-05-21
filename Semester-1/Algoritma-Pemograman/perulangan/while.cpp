#include <iostream>
using namespace std;

int main () {
    int awal, akhir;

    cout << "Masukan angka pertama: " ;
    cin >> awal;

    cout << "Masukan Angka terakhir: ";
    cin >> akhir;

    int i = awal;
    while (i <= akhir)
    {
        cout << i << ". Hai" << endl;
        i++;
    }
    

}