/*
Nama file : CekProsesBil.c
Deskripsi : program ini digunakan untuk menghitung dan
            menampilkan bilangan integer N yang telah
            diklasifikasikan prosesnya
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 7 Maret 2022 - 18.25 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int N;

    //algoritma
    printf("Masukkan bilangan = ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        N += 3;
        if (N % 5 == 0) {\
            N += 5;
        } else {
            N += 2;
        }
    } else {
        N += 2;
        if (N % 3 == 0) {
            N += 4;
        } else {
            N += 1;
        }
    }

    printf("\nBilangan N = %d\n", N);
    return 0;
}
