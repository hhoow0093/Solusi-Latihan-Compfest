/*
Deskripsi
Salah satu kegunaan komputer yang sangat berguna adalah melakukan operasi matematika, seperti penjumlahan dan lainnya. Setelah "Hello World" versi CPC CompFest 8, kali ini anda akan melakukan penjumlahan. Hati-hati, karena angka yang diberikan bisa sangat besar!

Format Masukan
Satu baris berisi dua buah bilangan bulat A dan B.

Format Keluaran
Satu baris  berisi sebuah bilangan bulat, hasil penjumlahan A dan B.

Contoh Masukan
8 16
Contoh Keluaran
24
Batasan
1 ≤ A,B ≤ 4x10^18

*/

#include <stdio.h>

int main(){
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a+b);
    return 0;
}