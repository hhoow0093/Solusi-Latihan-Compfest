/*
Deskripsi
Lagi-lagi, ada orang iseng yang mengirimkan parsel berisi array dengan N bilangan pada anda. Karena sedang bosan, Anda mencoba menyusun lagi array tersebut, dengan memasukkan berganti-gantian dari depan, belakang, depan, belakang, dan seterusnya. Depan dimulai dari indeks 1, dan belakang dimulai dari indeks N. Berarti, anda akan memasukkan berturut-turut bilangan pada indeks 1, N, 2, N-1, dan seterusnya. Tentunya, Anda berhenti ketika semua bilangan sudah dimasukkan tepat sekali.

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyak bilangan pada array.

Baris kedua berisi N buah bilangan Ai, isi array tersebut.

Format Keluaran
Satu baris berisi N buah bilangan, hasil penyusunan array tersebut secara bergantian depan-belakang. Setiap bilangan dipisahkan sebuah spasi.

Contoh Masukan
7
2 8 9 7 9 1 8
Contoh Keluaran
2 8 8 1 9 9 7
Batasan
1 ≤ N ≤ 100
1 ≤ Ai ≤ 100
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    int left = 0;
    int right = N - 1;
    int *array = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
    while(left <= right){
        if(right == left){
            printf("%d", array[left]);
            break;
        }
        else{
            printf("%d ", array[left]);
            printf("%d ", array[right]);
        }
        right--;
        left++;
    }
    return 0;
}