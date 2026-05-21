#include <iostream>
using namespace std;

int main () {
string username, pw;

cout << "===== Selamat Datang =====" << endl;

cout << "Masukan Username: ";
cin >> username;

cout << "Masukan Password: ";
cin >> pw;

if (username == "Kopi"){
    if (pw == "asbak"){
         cout << "Selamat Datang" << endl;
    } else {
            cout << "Password Salah" << endl;
    }
    

} else {
    cout << "Username Salah" << endl;
}

return 0;

}