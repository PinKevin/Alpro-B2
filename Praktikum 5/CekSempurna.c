/*
Nama file : CekSempurna.c
Deskripsi : program ini digunakan untuk mengecek apakah
            sebuah bilangan integer sempurna atau tidak,
            yaiu faktornya tanpa dirinya sendiri apabila
            dijumlah menghasilkan bilangan itu sendiri
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 21 Maret 2022 - 21.53 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int N, i, perf;

    // algoritma
    printf("Masukkan bilangan = ");
    scanf("%d", &N);

    perf = 0;

    if (N <= 0) {
        printf("\nBilangan harus positif\n");
    } else {
        for (i = 1; i < N; i++){
            if (N % i == 0) {
                perf += i;
            }
        }

        if (N == perf) {
          printf("\n%d adalah bilangan sempurna\n", N);
        } else {
            printf("\n%d bukan bilangan sempurna\n", N);
        }
    }



    return 0;
}





