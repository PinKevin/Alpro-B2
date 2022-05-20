/*
Nama file : 36IsiMatrik.c
Deskripsi : Program ini digunakan untuk membuat matriks
            sesuai aturan yang ditetapkan
            Aturannya adalah diagonal berisi 1, atas diagonal
            berisi 0, bawah diagonal berisi 2
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Selasa, 29 Maret 2022 - 20.36 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int i, j, M, N;

    // algoritma
    printf("Masukkan baris matriks = ");
    scanf("%d", &M);
    printf("Masukkan kolom matriks = ");
    scanf("%d", &N);

    if (M > 0 && N > 0 && M == N) {
        for (i = 1; i <= M; i++) {
            for (j = 1; j <= N; j++) {
                if (i == j) {
                    printf("1 ");
                } else if (i < j) {
                    printf("0 ");
                } else { // i > j
                    printf("2 ");
                }
            }
            printf("\n");
        }
    } else {
        printf("\nNilai M dan N harus sama dan positif\n");
    }

    return 0;
}
