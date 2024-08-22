/*
Deskripsi
Permutasi adalah penyusunan kembali suatu kumpulan objek dalam urutan yang berbeda dari urutan yang semula. Sebagai contoh, 1234 dapat disusun kembali menjadi 4231. Terdapat 24 permutasi berbeda dari 1234. Diberikan sebuah N, anda ingin membangkitkan semua permutasi 123...N yang valid. Hanya saja, karena itu membosankan, anda menambahkan batasan tambahan yaitu K. Sekarang, semua permutasi yang dibangkitkan valid hanya jika selisih setiap elemen yang bersebelahan tidak melebihi K.

Format Masukan
Satu baris berisi 2 buah bilangan bulat, N dan K.

Format Keluaran
Beberapa baris, dimana setiap baris berisi sebuah permutasi yang valid. Urutkan permutasi berdasarkan urutan leksikografis. Lalu, pisahkan setiap bilangan dalam sebuah permutasi menggunakan spasi.

Contoh Masukan 1
3 2
Contoh Keluaran 1
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
Contoh Masukan 2
3 1
Contoh Keluaran 2
1 2 3
3 2 1
Batasan
1 ≤ N, K ≤ 8
*/
/*
Example Walkthrough:
Let's say N = 3. Here's how the code works:

The loop begins with i = 0:

used[0] == 0, so arr[0] = 1 and used[0] = 1.
Recursive call with m = 1.
Inside the recursive call:

The loop begins again with i = 0, but now used[0] == 1, so we skip to i = 1.
used[1] == 0, so arr[1] = 2 and used[1] = 1.
Recursive call with m = 2.
Inside this recursive call:

used[0] == 1, used[1] == 1, so we skip to i = 2.
used[2] == 0, so arr[2] = 3 and used[2] = 1.
Recursive call with m = 3, at which point the entire permutation [1, 2, 3] is complete.
Backtracking:

The code backtracks by setting used[2] = 0 to explore other possibilities.
Then, it continues by resetting used[1] = 0 and tries using arr[1] = 3 and so on, generating [1, 3, 2], and continues this process to generate all permutations.

*/
#include <stdio.h>
#include <stdlib.h>


void print(int *arr, int N){
    for(int i = 0; i < N; i++ ){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int validate(int *arr, int N, int K){
    for(int i = 0; i < N -1 ; i++){
        if(abs(arr[i] - arr[i + 1]) > K ){
            return 0;
        }
    }
    return 1;

}

void permute(int *arr, int number, int N, int K, int *used){
    if(number == N){
        if(validate(arr, N, K)){
            print(arr, N);
        }
        return;
    }

    for(int i = 0; i < N; i++){
        if(used[i] == 0){
            arr[number] = i+1;
            used[i] = 1;
            permute(arr, number + 1, N, K, used);
            used[i] = 0;

        }   
    }
}


int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int arr[N];
    int used[N];
    for(int i =0; i < N; i++){
        used[i] = 0;
    }

    permute(arr, 0, N, K, used); 
    return 0;   

}