/*
Nama file : Tetris.c
Deskripsi : program ini digunakan untuk menampilkan
            dilayar susunan karakter ‘*’ sesuai dengan
            susunan. Tinggi berdasarkan N > 0
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 28 Maret 2022 - 14.01 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int i, j, N;

    // algoritma
    printf("Masukkan ketinggian = ");
    scanf("%d", &N);
    if (N > 0) {
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
        printf("\n");
        }
    } else {
        printf("\nBilangan harus positif\n");
    }


    return 0;
}
