

// int main () {
//     int x [5] = {80,  85, 90, 75, 88};

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Nilai Ke " << i+1 << ":" << x[i] << endl;
//     }
    
// }
#include <iostream>
using namespace std;

int main () {
    int nilai[5]; 
    double total = 0;
    int max, min;

    for (int i = 0; i < 5; i++) {
        cout << "Masukan sebuah nilai ke-" << (i + 1) << " : "; 
        cin >> nilai[i]; 
        total += nilai[i]; 

       if (i == 0) {
            max = nilai[i];
            min = nilai[i];
        } else {
            if (nilai[i] > max) {
                max = nilai[i];
            }
            if (nilai[i] < min) {
                min = nilai[i];
            }
        }
    }
    
    double ratarata = total / 5.0;
    cout << "Total Nilai: " << total << endl;
    cout << "Rata-rata nilai: " << ratarata << endl;
    cout << "Nilai terbesar: " << max << endl;

    return 0;
}