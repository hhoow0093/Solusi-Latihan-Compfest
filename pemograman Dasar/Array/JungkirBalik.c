/*
Deskripsi
Anda baru saja mendapat parsel berupa array dengan N buah angka. Sekarang, anda ingin membalikkan array tersebut.

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyak bilangan pada array.

N baris selanjutnya berisi Ai, elemen-elemen pada array.

Format Keluaran
N baris, isi array setelah urutannya dibalik.

Contoh Masukan
4
3
5
1
2
Contoh Keluaran
2
1
5
3
Batasan
1 ≤ N ≤ 100
1 ≤ Ai ≤ 100
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int N;
scanf("%d", &N);
int *array = (int *)malloc(sizeof(int) * N);
for(int i = 0; i < N; i++){
    scanf("%d", &array[i]);
}

for(int i = N -1; i > -1; i-- ){
    printf("%d\n", array[i]);
}
free(array);
return 0;
}