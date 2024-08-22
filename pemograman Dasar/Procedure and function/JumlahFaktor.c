/*
Deskripsi
Pak Chanek baru saja membersihkan gudangnya. Tiba-tiba, ia menemukan selembar kertas yang berisikan beberapa fungsi. Berikut ini isi kertas yang Pak Chanek temukan:

g(n) = banyak faktor positif dari n
h(n) = g(1) + g(2) + ... + g(n)
Pak Chanek lalu menuliskan sebuah bilangan bulat, yaitu X. Sekarang, Pak Chanek meminta bantuanmu untuk menghitung h(X).

Format Masukan
Satu baris berisi sebuah bilangan bulat X, sesuai deskripsi soal.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, nilai dari h(X).

Contoh Masukan
4
Sample Output
8
Batasan
1 ≤ X ≤ 1.000
*/

#include <stdio.h>


int CarikanFaktor(int nomor){
    int faktorAngka = 0;
    for(int i = 1; i<= nomor; i++){
        if(nomor % i == 0){
            faktorAngka++;
        }
    }
    return faktorAngka;
}

int main(){
    int x, result;
    result = 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        result += CarikanFaktor(i);
    }
    printf("%d", result);
    return 0;
}