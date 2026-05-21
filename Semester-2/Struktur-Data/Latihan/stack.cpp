#include <iostream>
#include <string>

using namespace std;

#define max 6 // maksimal tumpukan

struct stack {
    int top;
    string data[max];
};

// inisiasi stack
void init(stack &s) {
    s.top = -1;
}

// cek stack penuh
bool isFull(stack s) {
    return s.top == max - 1; 
}

// cek stack kosong
bool isEmpty(stack s) {
    return s.top == -1;
}

// tambah data stack 
void push(stack &s, string url) {
    if (isFull(s)) {
        cout << "Stack Penuh!!" << endl;
    } else {
        s.top++;
        s.data[s.top] = url;
        cout << "Berhasil Mengunjungi: " << url << endl;
    }
}

// ambil data stack (hapus dari riwayat)
void pop(stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!" << endl; 
    } else {
        cout << "Menghapus riwayat: " << s.data[s.top] << endl;
        s.top--;
    }
}

// lihat data teratas stack
void top(stack s) { 
    if (!isEmpty(s)) {
        cout << "Halaman saat ini: " << s.data[s.top] << endl;
    } else {
        cout << "Halaman saat ini: (Kosong)" << endl;
    }
}

int main() {
    stack riwayat;
    init(riwayat);
    string input;

    cout << "Masukan Teks: ";
    getline (cin, input);


    while (true)
    {
        if (input == "exit")
        {
            cout << "Program Selesai";
            break;
        }

        else if (input == "undo")
        {
            pop (riwayat);
        }

        else if (input == "")
        {
            push(riwayat, input);
        }
        
        
        
    }
    

    return 0;
}