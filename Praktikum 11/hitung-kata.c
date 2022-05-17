/*Nama File 	: hitung-kata.c*/
/*Deskripsi 	: Menghitung jumlah kata pada pita karakter*/
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 14 Mei 2022 - 09:05*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main() {
    // kamus
    char C1, C2;
    int count;

    // algoritma
    count = 1; // anggapan semua karakter ditulis sekaligus

    START();
    while (!EOP()) {
        C1 = CC;
        C2 = ' ';

        if (C1 == C2) {
            count += 1;
        }
        ADV();
    }

    printf("Jumlah kata = %d", count);
    getch();
    return 0;
}
