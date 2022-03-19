/*
Nama file : TarifPLN.c
Deskripsi : program ini digunakan untuk menghitung
            tarif listrik PLN
Pembuat : Emerio Kevin Aryaputra - 24060121120012
Waktu dibuat : Rabu, 9 Maret 2022 - 12.59 WIB
*/

#include <stdio.h>

int main() {
    // kamus
    int golTrf, kwh;

    //algoritma
    printf("Masukkan golongan pelanggan = ");
    scanf("%d", &golTrf);
    printf("Masukkan kWH terpakai = ");
    scanf("%d", &kwh);

    if ((golTrf == 1 || golTrf == 2) && kwh > 0) {
        if (kwh <= 100) {
            switch (golTrf) {
            case 1:
                printf("\nTarif Listrik PLN = %d\n", 1000 * 100);
                break;
            case 2:
                printf("\nTarif Listrik PLN = %d\n", 2000 * 100);
                break;
            }
        } else if (kwh > 100 && kwh < 1000) {
            switch (golTrf) {
            case 1:
                printf("\nTarif Listrik PLN = %d\n", 1000 * kwh);
                break;
            case 2:
                printf("\nTarif Listrik PLN = %d\n", 2000 * kwh);
                break;
            }
        } else { // kwh >= 1000
            switch (golTrf) {
            case 1:
                printf("\nTarif Listrik PLN = %d\n", kwh * 1000 + (kwh * 1000 * 10 / 100));
                break;
            case 2:
                printf("\nTarif Listrik PLN = %d\n", kwh * 2000 + (kwh * 2000 * 10 / 100));
                break;
            }
        }
    } else {
        printf("\nInput tidak valid\n");
    }

    return 0;
}





