#include <iostream>
using namespace std;

int main () {
    char grade;

    cout << "Masukan Grade";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Anda Sangat luar biasa";
        break;
    case 'B':
        cout << "Anda Luar biasa";
        break;
    case 'C':
        cout << "Biasa Aja";
        break;
    case 'D':
        cout << "Anda Tidak Lulus";
        break;

    default:
        cout << "Grade Salah";
        break;
    }
}