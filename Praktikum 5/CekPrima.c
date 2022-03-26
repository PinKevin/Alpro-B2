/*
Nama file : CekPrima.c
Deskripsi : program ini digunakan untuk mengecek apakah
            sebuah bilangan integer positif prima atau tidak
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 21 Maret 2022 - 21.42 WIB
*/

#include <stdio.h>
#include <math.h>

int main() {
    // kamus
    int N, i, cek;

    // algoritma
    printf("Masukkan bilangan = ");
    scanf("%d", &N);

    cek = 1;

    if (N <= 0) {
        printf("\nBilangan harus positif\n");
    } else if (N == 1) {
        printf("\n1 bukan bilangan prima\n", N);
    } else {
        for(i = 2; i <= sqrt(N); i++){
            if(!(N % i)){
                cek = 0;
            }
        }

        if (cek) {
          printf("\n%d adalah bilangan prima\n", N);
        } else {
            printf("\n%d bukan bilangan prima\n", N);
        }
    }



    return 0;
}




