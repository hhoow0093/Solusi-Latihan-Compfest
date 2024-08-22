/*
Deskripsi
Untuk suatu matriks A berukuran N*M, AT atau transpose matriks, merupakan hasil penukaran baris dan kolom dari matriks A. Secara formal,

 

[AT]ij = [A]ji

 

Sehingga, AT pasti berukuran M*N. Diberikan suatu matriks A, buatlah program yang dapat membuat  transposnya!

Format Masukan
Baris pertama berisi 2 buah bilangan bulat, N dan M, masing-masing menyatakan banyak baris dan kolom matriks A.

Baris kedua sampai N+1 masing-masing berisi M buah bilangan, dimana bilangan pada baris i kolom j menyatakan A(i-1)j.

Format Keluaran
M baris dengan masing-masing baris berisi N buah bilangan, yang menyatakan AT. Pisahkan setiap bilangan dalam baris yang sama menggunakan spasi.

Contoh Masukan
2 3
1 3 4
5 1 2
Contoh Keluaran
1 5
3 1
4 2
Batasan
1 ≤ N, M ≤ 100
1 ≤ Aij ≤ 100
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int **matrix = (int **)malloc(sizeof(int *) * row);
    for(int i = 0; i < row; i++){
        matrix[i] = (int *)malloc(sizeof(int) * col);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowT, colT;
    rowT = col;
    colT = row;

    int **result = (int **)malloc(sizeof(int *) * rowT);
    for(int i = 0; i < rowT; i++){
        result[i] = (int *)malloc(sizeof(int) * colT);
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int temp = matrix[i][j];
            result[j][i] = temp;
        }
    }

    for(int i = 0; i < rowT; i++){
        for(int j = 0; j < colT; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        free(matrix[i]);
    }
    free(matrix);
    for(int i = 0; i < rowT; i++){
        free(result[i]);
    }
    free(result);

    return 0;


}