#include <iostream>
using namespace std;

int main () {
    string pw;

    cout << "Masukan Password";
    cin >> pw;

    if (pw == "batu")
    {
        cout << "Password Benar!";
    }

    else {
        cout << "Password salah coba lagi!";
    }
    
    return 0;




}