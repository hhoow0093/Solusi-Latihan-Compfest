/*
Deskripsi
Di toko kelontong milik keluarga anda, terdapat N barang, dengan harga barang ke-i bernilai Ai. Anda diminta untuk mengurutkan barang-barang tersebut, terurut menaik sesuai harganya. Untuk melakukannya, anda membuat program. Agar anda bisa mendeteksi seandainya terjadi kesalahan, anda pun memberikan perintah yang mempermudah debugging. Akhirnya, program anda memiliki alur seperti berikut:

for i := 1 to N
    for j := i+1 to N
        if Ai > Aj
            swap(Ai, Aj)
            println "i j"
Tentukanlah hasil keluaran program anda tersebut!

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyak barang di toko kelontong.

Baris selanjutnya berisi N buah bilangan bulat Ai, harga tiap barang di toko kelontong.

Format Keluaran
Beberapa baris, hasil keluaran program yang anda buat.

Contoh Masukan
4
3 2 4 1
Contoh Keluaran
1 2
1 4
2 4
3 4
Batasan
1 ≤ N ≤ 100
1 ≤ Ai ≤ 100
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    int *arrayOfItems = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++ ){
        scanf("%d", &arrayOfItems[i]);
    }
    for(int i  = 0; i < N - 1; i++){
        for(int j  = i+1; j < N; j++){
            if(arrayOfItems[i] > arrayOfItems[j]){
                int temp = arrayOfItems[j];
                arrayOfItems[j] = arrayOfItems[i];
                arrayOfItems[i] = temp;
                printf("%d %d\n", i+1, j+1);
            }
        }

    }

    free(arrayOfItems);
    return 0;
}
