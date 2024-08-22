/*
Deskripsi
Struktur data lanjutan yang banyak aplikasinya di Competitive Programming adalah Segment Tree. Tenang, anda tidak diminta untuk mengimplementasikan Segment Tree. Kali ini, anda akan menganalisis memori yang digunakan di Segment Tree. Secara formal, Segment Tree yang memiliki n buah data akan membutuhkan memori sesuai dengan fungsi berikut:



Catatan: itu merupakan lambang ceiling (pembulatan ke atas) dan floor (pembulatan ke bawah).

Pertanyaannya, jika anda memiliki N buah data, berapakah memori yang akan anda butuhkan?

Format Masukan
Satu baris berisi sebuah bilangan bulat N, banyaknya data.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, banyaknya memori yang diperlukan.

Contoh Masukan
2
Contoh Keluaran
3
Batasan
1 ≤ N ≤ 105
*/

#include <stdio.h>
#include <math.h>

int SegmentTree(int number){
    if(number == 1){
        return 1;
    }
    else{
        return 1 + SegmentTree(ceil(number/2.0)) + SegmentTree(floor(number/2.0));
    }
}

int main(){
int N;
int result;
scanf("%d", &N);
result = SegmentTree(N);
printf("%d", result);
return 0;
}