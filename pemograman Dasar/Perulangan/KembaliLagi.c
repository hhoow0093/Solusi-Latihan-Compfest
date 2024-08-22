/*
Deskripsi
Di kota Depok, terdapat C buah persimpangan yang diberi nomor 0 sampai C-1. 
Sebagai ilmuwan handal, anda baru saja menciptakan sebuah teleporter untuk pindah dari satu persimpangan ke persimpangan lain. 
Teleporter tersebut memiliki 2 parameter bilangan bulat, yaitu A dan B. 
Jika anda berada pada persimpangan Z, dengan menggunakan teleporter, 
anda akan berpindah ke persimpangan (A*Z + B) % C, dengan % menyatakan operasi sisa hasil bagi. Saat ini, 
anda berada di persimpangan X. Anda penasaran, jika anda terus menerus menggunakan teleporter, 
butuh berapa langkah hingga anda kembali lagi ke persimpangan X?

Format Masukan
Satu baris berisi 4 buah bilangan bulat A, B, C, dan X.

Format Keluaran
Satu baris berisi sebuah bilangan bulat yang menyatakan banyaknya langkah yang dibutuhkan hingga kembali lagi ke persimpangan X.

Contoh Masukan
1 3 10 1
Contoh Keluaran
10
Batasan
1 ≤ C ≤ 10.000
0 ≤ A, B, X < C
Dijamin anda dapat kembali ke persimpangan X.
*/
#include <stdio.h>

int main(){
    int A, B, C, X;
    int balik = 0;
    int count = 0;
    scanf("%d %d %d %d", &A, &B, &C, &X);
    int target_persimpangan = X;
    while(balik != 1){
        X = (A*X + B) % C;
        count++;
        if(X == target_persimpangan){
            balik++;
        }
    }
    printf("%d", count);


}