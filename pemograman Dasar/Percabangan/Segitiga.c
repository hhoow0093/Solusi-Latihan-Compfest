/*
Deskripsi
Tentunya kita semua tahu apa itu segitiga. Sekarang, di depan anda tertulis 3 bilangan yaitu A, B, dan C. Anda penasaran, mungkinkah membuat sebuah segitiga yang panjang sisi-sisinya adalah A, B, dan C?

Format Masukan
Satu baris berisi 3 buah bilangan bulat A, B, dan C.

Format Keluaran
Satu baris berisi "segitiga" (tanpa tanda petik) jika segitiga dapat dibentuk, atau "bukan segitiga" (tanpa tanda petik) jika tidak.

Contoh Masukan 1
3 4 6
Contoh Keluaran 1
segitiga
Contoh Masukan 2
4 4 8
Contoh Keluaran 2
bukan segitiga
Batasan
1 ≤ A, B, C ≤ 1.000
*/
#include <stdio.h>

int main(){
int segitiga[3];
int max = 0;
int sum = 0;
    scanf("%d %d %d", &segitiga[0], &segitiga[1], &segitiga[2]);
    for(int i = 0; i < 3; i++ ){
        if(max < segitiga[i]){
            max = segitiga[i];
        }
    }
    for(int i = 0; i < 3; i++){
        if(segitiga[i] == max){
            continue;
        }
        sum += segitiga[i]; 
    }
    if(sum > max){
        printf("segitiga");
    }
    else{
        printf("bukan segitiga");
    }
    return 0;

}