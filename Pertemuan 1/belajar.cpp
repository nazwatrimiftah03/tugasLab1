#include <iostream>  // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {
    
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl; // menampilkan teks "Hello World" ke layar

    cout << "Masukkan nama Anda : "; //membaca input nama dari pengguna termasuk spasi
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : "; // membaca input kom
    cin >> kom;

    cout << "Masukkan NIM : "; //membaca input nim
    cin >> nim;

    cout << "Masukkan IP : "; // membaca input ip
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) :  ";
    jenisKelamin = getche(); // agar karakter langsung tampil, tanpa tekan enter

    /*Untuk Output*/
    cout << "\n" << nama << endl; // menampilkan nama yg di input
    cout << nim << endl;// menampilkan NIMama yg di input
    cout << kom << endl;// menampilkan KOM yg di input
    cout << ip << endl;// menampilkan IP yg di input
    putchar(jenisKelamin); // untuk menampilkan karakter

    getch(); // karakter yang diketik ga di tampilkan di layar
}

