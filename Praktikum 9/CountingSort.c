/*Nama File 	: CountingSort.c*/
/*Deskripsi 	: Mengurutkan anggota array bilangan lebih dari 0
                  dengan menghitung jumlah kemunculan anggota unik
                  dalam array */
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 4 Mei 2022 - 21:27*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

// mencari elemen max pada array
int ElemenMax(int T[], int N) {
    // kamus lokal
    int max, i;

    // algoritma
    max = T[0];
    for (i = 1; i < N; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }

    return max; //maximum element from the array
}

// algoritma counting sort
void CountingSort(int T[], int N) {
    // kamus lokal
    int hasil[N + 1];
    int max = ElemenMax(T, N);
    int count[max + 1]; //count array dengan ukuran [max + 1]
    int i;

    // Buat count array dengan semua anggota adalah 0
    for (i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    // Simpan kemunculan tiap elemen
    for (i = 0; i < N; i++) {
        count[T[i]]++;
    }

    // Total kemunculan
    for (i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    /* Cari index array asal tiap elemen pada array count, lalu
    letakkan elemen pada array hasil*/
    for (i = N - 1; i >= 0; i--) {
        hasil[count[T[i]] - 1] = T[i];
        count[T[i]]--; // kurangi count untuk anggota yang sama
    }

    // Kembalikan ke array semula
    for (i = 0; i < N; i++) {
        T[i] = hasil[i];
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
        if (T[i] < 0) {
            printf("\nMasukan tidak boleh negatif\n");
            return 1;
        }
    }

    CountingSort(T, N);

    printf("\nTabel setelah disortir\n");
    PrintTabel(T, N);

    return 0;
}
