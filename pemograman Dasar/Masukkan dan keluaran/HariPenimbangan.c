/*
Deskripsi
Berat badan adalah salah satu hal yang cukup sensitif untuk ditanyakan. Namun, terkadang berat badan kita bisa diketahui orang lain karena hal-hal tertentu, contohnya saat tes kesehatan. Hari ini, anda akan mencatat berat badan 6 orang berbeda. Karena anda cukup iseng (dan senggang tentunya), anda memutuskan untuk menghitung rata-rata berat 6 orang tersebut.

Format Masukan
Satu baris berisi 6 buah bilangan bulat A, B, C, D, E, dan F, berat masing-masing orang yang anda catat.

Format Keluaran
Satu baris berisi sebuah bilangan nyata, yaitu rata-rata enam orang tersebut. Jawaban dianggap benar jika kesalahan mutlak tidak melebihi 10-6

Contoh Masukan
50 70 55 63 84 100
Contoh Keluaran
70.333333333
*/

#include <stdio.h>
// tipe data tidak menggunakan float karena gloat hanya menyediakan 6-7 desimal untuk presisi,
//double menyediakan 15-16 digit presisi
int main(){
    double hasil;
    int a, b, c , d, e, f;
    int jumlah = 6;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    hasil = (double)(a + b + c +d + e + f)/(double)6;
    printf("%.9f", hasil);
    return 0;

}