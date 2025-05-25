#include <stdio.h> // header untuk C
#include <conio.h> // header untuk fungsi getch()
#include <string.h> // diperlukan untuk fungsi strlen (jika trimming newline)

int main() {
    char nama[50]; //deklarasi array karakter untuk nama maks.49 karakter
    int nim; //deklarasi variabel integer menyimpan nim
    char kom[2]; // deklarasi array menyimpan kom
    float ip; // deklarasi varibel float menyimpan ip

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    fgets(nama, sizeof(nama), stdin); // get string
    nama[strcspn(nama, "\n")] = 0; // hapus newline

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // membersihkan newline sisa dari scanf

    printf("Masukkan kom : ");
    fgets(kom, sizeof(kom), stdin); 
    kom[strcspn(kom, "\n")] = 0; // hapus newline

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // menampilkan nim

    printf("KOM : ");
    puts(kom); //menampilkan kom
    printf("IP : %f\n", ip); //menampilkan ip

    printf("press any button to continue...");
    getch(); //menunggu input karakter sebelum console
}

