/*
Nama file : TunjAnak.c
Deskripsi : program ini digunakan untuk menghitung
            tunjangan anak
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Rabu, 9 Maret 2022 - 12.38 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int jmlAnak, gjPkk;

    //algoritma
    printf("Masukkan jumlah anak = ");
    scanf("%d",&jmlAnak);
    printf("Masukkan gaji pokok = ");
    scanf("%d", &gjPkk);

    if (jmlAnak >= 0 && gjPkk > 0) {
        if(jmlAnak < 3){
            printf("\nTunjangan anak = %d\n", jmlAnak * 10 * gjPkk / 100);
        }
        else{
            printf("\nTunjangan anak = %d\n", 3 * 10 * gjPkk / 100);
        }
    } else {
        printf("Input tidak valid");
    }

    return 0;
}





