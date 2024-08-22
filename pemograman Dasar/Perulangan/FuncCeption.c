/*
Deskripsi
Pak Chanek sedang senang menghitung fungsi linear. Kali ini, ia menyiapkan 4 bilangan bulat A, B, X, dan Y. Ia akan melakukan kegiatan berikut:

Jika X > Y, berhenti. Jika tidak, pindah ke langkah 2.
Tulis X pada kertas. Jika kertas masih kosong, tulis di bagian atas. Jika tidak, tulis di bawah bilangan yang terakhir ditulis.
Ubah X menjadi A*X + B.
Kembali ke langkah 1.
Namun, setelah pergi ke toilet sebentar, kertas yang digunakan Pak Chanek untuk kegiatan tersebut hilang! Bantulah Pak Chanek mencari tahu bagaimana isi kertas tersebut!

Format Masukan
Satu baris berisi 4 buah bilangan bulat A, B, X, dan Y.

Format Keluaran
Beberapa baris yang menyatakan isi kertas Pak Chanek.

Contoh Masukan
2 5 10 100
Contoh Keluaran
10
25
55
*/
#include <stdio.h>

int main(){
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    while(X < Y){
        printf("%d\n", X);
        X = A * X + B;
    }
    return 0;
}