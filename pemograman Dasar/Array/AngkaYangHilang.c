/*
Deskripsi
Anda baru saja menuliskan seluruh bilangan bulat dari 1 sampai N, masing-masing pada sebuah kertas. Namun, tiba-tiba saja terjadi gempa bumi yang sangat hebat! Gempa bumi tersebut menyebabkan kertas-kertas yang baru saja anda tulisi tersebut tersebar secara acak. Akibatnya, beberapa kertas pun hilang. Anda berhasil mengumpulkan K kertas. Sekarang, anda ingin mencari tahu kertas-kertas yang anda temukan, sebelum anda harus pergi untuk evakuasi.

Format Masukan
Baris pertama berisi 2 buah bilangan bulat N dan K, masing-masing menyatakan banyaknya kertas awal dan banyaknya kertas yang anda temukan.

Baris kedua berisi K buah bilangan bulat Ai, kertas-kertas yang anda temukan.

Format Keluaran
Satu baris berisi N-K bilangan, kertas-kertas yang hilang. Keluarkan secara terurut, dan pisahkan menggunakan spasi.

Contoh Masukan
3 1
3
Contoh Keluaran
1 2
Batasan
1 ≤ N ≤ 105
0 ≤ K < N
1 ≤ Ai ≤ N
Untuk setiap i < j, Ai ≠ Aj
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int N, K;
scanf("%d %d", &N, &K);
int *found = (int *)calloc(N + 1, sizeof(int)); //membuat seluruh array menjadi 0. N + 1 karena jika user masuk angka paling besar, maka index aeeaynta tidak dapat ditampung saat scanf angka

for(int i = 0; i < K; i++){
    int Kertas;
    scanf("%d", &Kertas);
    found[Kertas] = 1;
}

for(int i = 1; i <= N; i++ ){
    if(found[i] == 1){
        continue;
    }
    else{
        printf("%d ", i);
    }
}
free(found);

return 0;
}