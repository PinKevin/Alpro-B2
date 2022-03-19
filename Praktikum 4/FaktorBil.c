/*
Nama file : FaktorBil.c
Deskripsi : program ini digunakan untuk menentukan
            faktor dari bilangan integer positif
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 14 Maret 2022 - 16.22 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int N, i;

    //algoritma
    printf("Masukkan bilangan = ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("\nBilangan harus positif\n");
    } else {
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}




