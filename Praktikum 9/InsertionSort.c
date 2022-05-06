/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Mengurutkan anggota array dengan menempatkan
                  anggota yang belum disortir di tempat yang
                  sesuai di tiap iterasi */
/*Pembuat   	: 24060121120012 - Emerio Kevin Aryaputra*/
/*Tgl Pembuatan	: 4 Mei 2022 - 22:26*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

// algoritma insertion sort
void InsertionSort(int T[], int N) {
    // kamus lokal
	int i, cek, j;

	// algoritma
	for (i = 1; i < N; i++) {
		cek = T[i];
		j = i - 1;

		/* Pindahkan elemen T[0..i-1] yang lebih
		besar dari cek ke satu posisi di depan
		posisinya sekarang*/
		while (j >= 0 && T[j] > cek) {
			T[j + 1] = T[j];
			j = j - 1;
		}
		T[j + 1] = cek;
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

    InsertionSort(T, N);

    printf("\nTabel setelah disortir\n");
    PrintTabel(T, N);

    return 0;
}
