/*
Trace dari suatu matriks persegi berukuran NxN didefinisikan sebagai

rumus

Atau dengan kata lain, jumlah dari elemen-elemen pada diagonal utamanya. Diberikan suatu matriks A berukuran NxN, hitunglah trace dari matriks tersebut!

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, ukuran dari matriks A.

Baris kedua hingga N+1 berisi N buah bilangan bulat yang menyatakan matriks A. Bilangan pada baris ke-i kolom ke-j merupakan A(i-1)j.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, trace dari matriks A.

Contoh Masukan
3
1 2 3
4 5 6
7 8 9
Contoh Keluaran
15
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrixBuilder;
    scanf("%d", &matrixBuilder);
    int **matrix = (int **)malloc(sizeof(int *) * matrixBuilder);
    for(int i = 0; i < matrixBuilder; i++){
        matrix[i] = (int *)malloc(sizeof(int) * matrixBuilder);
    }
    int result = 0;
    for(int i = 0; i < matrixBuilder; i++){
        for(int j = 0; j < matrixBuilder; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < matrixBuilder; i++){
        for(int j = 0; j < matrixBuilder; j++){
            if(i == j){
                result += matrix[i][j];
            }
        }
    }

    printf("%d", result);
    for(int i = 0; i < matrixBuilder; i++){
    free(matrix[i]);
    }
    free(matrix);
    return 0;
}