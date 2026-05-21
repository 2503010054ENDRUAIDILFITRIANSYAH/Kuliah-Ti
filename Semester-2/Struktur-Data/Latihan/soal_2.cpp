#include <iostream>
using namespace std;

#define max 5 // maksimal tumpukan

struct stack
{
    int top = -1; 
    string aktivitas [max];

    // cek apakah stack penuh?
    bool isfull() {
        return top == max -1;
    }

    // cek apakah stack kosong?
    bool isEmpty() {
        return top == -1;
    }

    // push data ke stack
    void push (string data) {
        if (isfull()) 
        {
            cout << "Stack penuh!! tidak bisa menambahkan data" << data << endl;
        } else {
            top ++; // ++ push menambah data
            aktivitas[top] = data;
            cout << "Data di tambahkan!! " << data << endl;
        }
    
    }

    // pop data
    void pop() {
         if(isEmpty()) {
            cout << "Data kosong!";
         } else {
            cout << "Data di keluarkan!! " << aktivitas[top] << endl;
            top--;
         }
    }

    string peek () {
        if (!isEmpty())
        {
            
            return aktivitas[top];
        }
        return "stack kosong!! ";
    }

    void display() {
        if (isEmpty()) 
        {
            cout << "Stack kosong!! " << endl;
        } else {
            cout << "Isi stack teratas: " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << "- " << aktivitas[i] << endl;
            }
            
        }
        
    }
};

int main () {

    // push
    stack e;
    e.push("login");
    e.push("Buka file");
    e.push("compile");
    e.push("run program");

    // aktivitas terakhir
    cout << "Aktivitas terakhir " << e.peek () << endl;

    //pop
    cout << endl;
    e.pop();
    e.pop();

    // tampilkan stack
    e.display();


}
