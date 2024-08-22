/*
Deskripsi
Untuk keperluan CompFest 8, anda baru saja diminta untuk membuat logo. Untungnya, anda hanya diminta membuat huruf C. Huruf C tersebut akan dibuat di karton berukuran N*M, dengan ketebalan huruf L. Agar tidak terjadi kesalahan, anda memutuskan untuk membuat program untuk menggambar hasil akhirnya. Untuk lebih jelasnya, perhatikan contoh keluaran.

Format Masukan
Satu baris berisi 3 buah bilangan bulat N, M, dan L, masing-masing menyatakan tinggi, lebar karton, dan ketebalan huruf.

Format Keluaran
N baris, dimana tiap baris berisi M karakter. Gunakan karakter '*' untuk menandai karton yang dicat, dan '.' untuk karton yang tidak dicat.

Contoh Masukan
7 7 2
Contoh Keluaran
*******
*******
**.....
**.....
**.....
*******
*******

Batasan
3 ≤ N ≤ 100
2 ≤ M ≤ 100
1 ≤ L ≤ 100
N > 2*L
M > L
*/

#include <stdio.h>
int main(){
    int N, M, L;
    scanf("%d %d %d", &N, &M, &L);
        int tebal_atas = 1;
        while(tebal_atas <= L){
            for(int i  = 0; i < M; i++){
                printf("*");
            }
            printf("\n");
            tebal_atas++;
        }
        
        int tengah = N - L - L;
        int tebal_tengah = 1;
        while(tebal_tengah <= tengah){
        for(int i = 0; i < M; i++){
            if(i < L){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
        tebal_tengah++;
        }

        int tebal_bawah = 1;
        while(tebal_bawah <= L){
            for(int i  = 0; i < M; i++){
                printf("*");
            }
            printf("\n");
            tebal_bawah++;
        }
        return 0;
}