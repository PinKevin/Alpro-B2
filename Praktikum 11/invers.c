/*Nama File 	: invers.c*/
/*Deskripsi 	: Membalik susunan karakter pada pita karakter*/
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 17 Mei 2022 - 18:56*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int LengthPita;
    char ArrChar[100];
    int i;

/*Algoritma*/
    LengthPita = CharCount();

    START();

    i = 0;
    while(!EOP()){
        ArrChar[i] = CC;
        ADV();
        i++;
    }

    printf("Pita terbaca asli = ");
    for (int j = 0; j < LengthPita; j++) {
        printf("%c", ArrChar[j]);
    }

    printf("\nPita setelah dibalik = ");
    for (int j = LengthPita - 1; j >= 0; j--) {
        printf("%c", ArrChar[j]);
    }

    getch();
    return 0;
}
