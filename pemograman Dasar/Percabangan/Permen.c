/*
Deskripsi
Hari ini, anda sedang mengunjungi sebuah panti asuhan dengan membawa N buah permen. Sesampainya di sana, anda menghitung, dan mendapati bahwa panti asuhan tersebut menampung K orang anak. Anak-anak tersebut tahu anda membawa permen, bahkan mereka tahu persis jumlahnya. Anda ingin membagikan semua permen anda secara merata. Tentukan apakah anda dapat membagi semua permen secara merata atau tidak!

Format Masukan
Satu baris berisi dua buah bilangan bulat N dan K, msaing-masing menyatakan jumlah permen dan jumlah anak.

Format Keluaran
Satu baris berisi "Hore ^_^" (tanpa tanda kutip) jika permen dapat dibagi merata, atau "Kecewa :(" (tanpa tanda kutip) jika tidak.

Contoh Masukan 1
6 3
Contoh Keluaran 1
Hore ^_^
Contoh Masukan 2
6 4
Contoh Keluaran 2
Kecewa :(
Batasan
1 ≤ N, K ≤ 1.000
*/

#include<stdio.h>

int main(){
    int jumlah_permen, jumlah_anak;
    scanf("%d %d", &jumlah_permen, &jumlah_anak);
    if(jumlah_permen % jumlah_anak == 0){
        printf("Hore ^_^");
    }
    else{
        printf("Kecewa :(");
    }
    return 0;
}