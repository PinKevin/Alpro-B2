/*
Nama file : CekHari.c
Deskripsi : program ini digunakan untuk mengecek
            integer 1-7 dan menampilkan string yang
            telah diklasifikasikan jenisnya
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 7 Maret 2022 - 20.15 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int N;

    //algoritma
    printf("Masukkan bilangan = ");
    if (scanf("%d", &N)) {
      if (N == 1) {
          printf("\nHari Senin\n", N);
      } else if (N == 2) {
          printf("\nHari Selasa\n", N);
      } else if (N == 3) {
          printf("\nHari Rabu\n", N);
      } else if (N == 4) {
          printf("\nHari Kamis\n", N);
      } else if (N == 5) {
          printf("\nHari Jumat\n", N);
      } else if (N == 6) {
          printf("\nHari Sabtu\n", N);
      } else if (N == 7) {
          printf("\nHari Minggu\n", N);
      } else {
          printf("\nMasukan nomor hari tidak tepat\n");
      }
    } else {
        printf("\nMasukan nomor hari tidak tepat\n");
    }

    return 0;
}

