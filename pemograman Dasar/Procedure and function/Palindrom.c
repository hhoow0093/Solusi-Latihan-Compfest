/*
Deskripsi
Setelah akhir-akhir ini melihat banyak sekali palindrom, Budi merasa sangat muak. Akhirnya, ia memutuskan untuk membuat sebuah alat yang bisa mendeteksi palindrom. Sayangnya, Budi tidak terlalu pandai memrogram. Ia tahu bahwa anda lebih handal dalam hal ini. Sebagai temannya, bantulah Budi!

Suatu string dikatakan palindrom jika dan hanya jika string tersebut dapat dibaca dengan sama baik dari depan maupun belakang.

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyaknya string yang ingin diperiksa.

Baris kedua sampai N+1 berisi sebuah string S, kata yang ingin diperiksa.

Format Keluaran
Untuk setiap string yang ingin diperiksa, keluarkan "palindrom" (tanpa tanda kutip) jika string tersebut merupakan palindrom, dan "bukan palindrom" (tanpa tanda kutip) jika tidak.

Contoh Masukan
2
gagaga
gattag
Contoh Keluaran
bukan palindrom
palindrom
Batasan
1 ≤ N ≤ 10
1 ≤ |S| ≤ 1.000
S hanya terdiri dari karakter 'a' sampai 'z'.
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* PalindromeChecker(char **string){
    char *reversed = (char *)malloc(sizeof(char) * (strlen(*string) + 1));
    int counter = 0;
    for(int i = strlen(*string) - 1; i > -1; i--){
        reversed[counter] = (*string)[i];
        counter++;
    }
    counter = 0;
    reversed[strlen(*string)] = '\0';

    bool flag = true;
    for(int i = 0; i < strlen(*string); i++){
        if(reversed[i] !=  (*string)[i]){
            flag = false;
        }
    }

    if(flag){
        return "palindrom";
    }
    else{
        return "bukan palindrom";
    }

}

int main(){
    int N;
    scanf("%d", &N);
    char **arrayOfstrings = (char **)malloc(sizeof(char *) * N);
    for(int i = 0; i < N; i++){
        arrayOfstrings[i] = (char *)malloc(sizeof(char) * 1000);
    }
    for(int i = 0; i < N; i++){
        scanf("%s", arrayOfstrings[i]);
    }
    for(int i = 0; i < N; i++){
        char *result = NULL;
        result = PalindromeChecker(&arrayOfstrings[i]);
        printf("%s\n", result);
    }
    return 0;
}