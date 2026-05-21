#include <iostream>
using namespace std;

int main () {
    int L, p , l;
    string Ulangi;

    do
    {  
    cout << "Masukan panjang: ";
    cin >> p;

    cout << "Masukan Lebar: ";
    cin >> l;
    
     // rumus
    L = p * l;

    cout << "Hasil: " << L << endl;

    cout << "Ingin menghitung lagi?";
    cin >> Ulangi;

   
    } while (Ulangi == "y");
    
    
}