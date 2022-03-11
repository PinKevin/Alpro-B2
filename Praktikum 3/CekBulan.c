/*
Nama file : CekBulan.c
Deskripsi : program ini digunakan untuk mengecek
            integer 1-12 dan menampilkan string yang
            telah diklasifikasikan jenisnya
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 7 Maret 2022 - 21.21 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int N;

    //algoritma
    printf("Masukkan bilangan = ");
    if (scanf("%d", &N)) {
      if (N == 1) {
          printf("\nBulan Januari\n", N);
      } else if (N == 2) {
          printf("\nBulan Februari\n", N);
      } else if (N == 3) {
          printf("\nBulan Maret\n", N);
      } else if (N == 4) {
          printf("\nBulan April\n", N);
      } else if (N == 5) {
          printf("\nBulan Mei\n", N);
      } else if (N == 6) {
          printf("\nBulan Juni\n", N);
      } else if (N == 7) {
          printf("\nBulan Juli\n", N);
      } else if (N == 8) {
          printf("\nBulan Agustus\n", N);
      } else if (N == 9) {
          printf("\nBulan September\n", N);
      } else if (N == 10) {
          printf("\nBulan Oktober\n", N);
      } else if (N == 11) {
          printf("\nBulan November\n", N);
      } else if (N == 12) {
          printf("\nBulan Desember\n", N);
      } else {
          printf("\nMasukan nomor bulan tidak tepat\n");
      }
    } else {
        printf("\nMasukan nomor bulan tidak tepat\n");
    }

    return 0;
}

