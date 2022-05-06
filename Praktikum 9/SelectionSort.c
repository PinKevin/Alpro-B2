/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Mengurutkan anggota array dengan memilih
                  anggota terkecil dari array yang belum disortir pada
                  tiap iterasi lalu diletakkan pada awal array
                  yang belum disortir */
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 4 Mei 2022 - 22:53*/

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

// algoritma selection sort
void SelectionSort(int T[], int N) {
    int i, j, indexMin;

    // Geser satu per satu batas subarray yang belum sort
    for (i = 0; i < N - 1; i++) {
        // Cari elemen minimum
        indexMin = i;

        for (j = i + 1; j < N; j++) {
            if (T[j] < T[indexMin]) {
                indexMin = j;
            }
        }

        // Tukar elemen minimum dengan elemen pertama
        TukarElemen(&T[indexMin], &T[i]);
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

    SelectionSort(T, N);

    printf("\nTabel setelah disortir\n");
    PrintTabel(T, N);

    return 0;
}
