/*
Iri melihat lomba Miss Universe, sekelompok pemuda berinisiatif mengadakan lomba Mas Universe. Mas Universe diikuti oleh N peserta, dimana peserta ke-i memiliki tingkat kekuatan Pi. Gelar Mas Universe akan dimenangkan oleh peserta dengan tingkat kekuatan tertinggi. Sebagai penonton, anda ingin mengetahui tingkat kekuatan Mas Universe yang pertama.

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyak peserta Mas Universe.

Baris kedua berisi N buah bilangan bulat Pi, tingkat kekuatan tiap peserta.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, tingkat kekuatan Mas Universe yang pertama.

Contoh Masukan
3
5 2 4
Contoh Keluaran
5
Batasan
1 ≤ N ≤ 105
1 ≤ Pi ≤ 105
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int jumlahOrang;
    scanf("%d", &jumlahOrang);
    int *arrayOrang = (int *)malloc(sizeof(int) * jumlahOrang);
    for(int i = 0; i < jumlahOrang; i++){
        scanf("%d", &arrayOrang[i]);
    }
    int max = 0;
    for(int i = 0; i < jumlahOrang; i++){
        if(max < arrayOrang[i]){
            max = arrayOrang[i];
        }
    }
    printf("%d", max);
    free(arrayOrang);
    return 0;
}