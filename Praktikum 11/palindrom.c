/*Nama File 	: palindrom.c*/
/*Deskripsi 	: Mengecek apakah susunan karakter pada pita karakter
                  palindrom atau tidak. Palindrom adalah kata yang sama
                  saat dibaca dari depan maupun belakang.
*/
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 17 Mei 2022 - 18:56*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int Palindrom(char C[]){
    // kamus lokal
    int CharLength;
    int i,j, cek = 0;

    // algoritma
    CharLength = CharCount();

    for (i = 0; i < CharLength; i++) {
        if (C[i] != C[CharLength- i - 1]) {
            cek = 1;
            break;
        }
    }

    return cek;
}

int main(){
    /*Kamus*/
    int LengthPita;
    char ArrChar[100];
    int i, j, cek;

    /*Algoritma*/
    LengthPita = CharCount();
    i = 0;

    START();

    while(!EOP()){
        ArrChar[i] = CC;
        ADV();
        i++;
    }

    cek = Palindrom(ArrChar);
    if (cek) printf("Bukan palindrom");
    else printf("Palindrom");


    getch();
    return 0;
}
