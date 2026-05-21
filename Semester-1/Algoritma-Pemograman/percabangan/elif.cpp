#include <iostream>
using namespace std;

int main () {
    int nilai_ujian;

    cout << " Masukan Nilai";
    cin >> nilai_ujian;

    if (nilai_ujian >= 90)
    {
        cout << "Nilai Anda A";
    }
    
    else if (nilai_ujian >= 80)
    {
        cout << "Nilai Anda B";
    }

    else if (nilai_ujian >= 70)
    {
        cout << "Nilai Anda C";
    }

    else if (nilai_ujian >= 60)
    {
        cout << "Nilai Anda D";
    }

    else {
        cout << "Anda tidak lulus";
    }
    
    return 0;
     
    




}