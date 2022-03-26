/*
Nama file : SiputNaik.c
Deskripsi : program ini digunakan untuk menghitung berapa
            hari yang dibutuhkan siput untuk mencapai
            kettinggian N meter
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 21 Maret 2022 - 22.41 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int hari;
    float N, passed;

    // algoritma
    printf("Masukkan ketinggian siput = ");
    scanf("%f", &N);

    if (N <= 0) {
        printf("Ketinggian harus positif");
    } else {
        hari = 0;
        passed = 0;
        while (passed <= N) {
            passed += 0.3;
            hari += 1;
            if (passed >= N) {
                break;
            }
            passed -= 0.1;
        }
        printf("\nSiput mencapai ketinggian %.1f meter ketika hari ke-%d\n", N, hari);
    }

    return 0;
}
