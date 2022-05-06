/*Nama File 	: BubbleSort.c*/
/*Deskripsi 	: Mengurutkan anggota array dengan menukar
                  anggota yang berdekatan secara terus
                  menerus jika keduanya berada pada posisi
                  yang salah */
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 29 April 2022 - 23:03*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

// menukar elemen
void TukarElemen(int* a, int* b) {
    // kamus lokal
    int temp;

    // algoritma
    temp = *a;
    *a = *b;
    *b = temp;
}

// algoritma bubble sort
void BubbleSort(int T[], int N) {
    // kamus lokal
    int i, j;

    //algoritma
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                TukarElemen(&T[j], &T[j + 1]);
            }
        }
    }
}

// output tabel
void PrintTabel(int T[], int N) {
    // kamus lokal
    int i;

    // algoritma
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int i, N;

    /*Algoritma*/
    printf("Masukkan ukuran tabel = ");
    scanf("%d", &N);

    int T[N];
    for (i = 0; i < N; i++) {
        printf("Masukkan anggota tabel ke-%d = ", i);
        scanf("%d", &T[i]);
    }

    BubbleSort(T, N);

    printf("\nTabel setelah disortir\n");
    PrintTabel(T, N);

    return 0;
}
