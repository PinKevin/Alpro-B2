/*
Nama file : CekSeriPositif.c
Deskripsi : program ini digunakan untuk mengecek dan
            menampilkan total 3 tahanan bilangan tidak
            negatif r1, r2, dan r3
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Senin, 7 Maret 2022 - 21.44 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    float r1, r2, r3, rt;

    //algoritma
    printf("Masukkan tahanan pertama = ");
    scanf("%f", &r1);
    printf("Masukkan tahanan kedua = ");
    scanf("%f", &r2);
    printf("Masukkan tahanan ketiga = ");
    scanf("%f", &r3);

    if (r1 >= 0 && r2 >= 0 && r3 >= 0) {
        rt = r1 + r2 + r3;
        printf("\nTotal tahanan = %.2f\n", rt);
    } else {
        printf("\nMasukan tahanan tidak boleh negatif\n");
    }

    return 0;
}

