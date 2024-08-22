/*
Deskripsi
Teman anda mengirimkan suatu pesan kepada anda. Anda ingin mengelempokkan pesan tersebut ke salah satu dari kelompok di bawah:

nol, jika pesan yang diberikan berupa 0.
bilangan bulat positif, jika pesan yang diberikan merupakan sebuah bilangan bulat positif tanpa leading zero.
bilangan bulat negatif, jika pesan yang diberikan merupakan sebuah bilangan bulat negatif, dimana setelah tanda '-' bukan merupakan 0.
kata, jika pesan yang diberikan hanya terdiri dari huruf kecil alfabet ('a' sampai 'z').
Tentukan jenis dari pesan yang anda dapat.

Format Masukan
Satu baris berisi S, pesan yang anda terima. Dijamin bahwa pesan yang anda terima dapat dikelompokkan ke salah satu dari 4 kelompok di atas.

Format Keluaran
Satu baris berisi "nol", "bilangan bulat positif", "bilangan bulat negatif", atau "kata" (masing-masing tanpa tanda petik), sesuai deskripsi soal.

Contoh Masukan 1
compfest
Contoh Keluaran 1
kata
Contoh Masukan 2
2016
Contoh Keluaran 2
bilangan bulat positif
Contoh Masukan 3
0
Contoh Keluaran 3
nol
Contoh Masukan 4
-1
Contoh Keluaran 4
bilangan bulat negatif
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *string = (char *)malloc(sizeof(char) * 100);
    scanf("%99s", string);
    if(string[0] == '-'){
        printf("bilangan bulat negatif");
        return 0;
    }
    else if(string[0] == '0'){
        printf("nol");
        return 0;
    }
    else{
        for(int i = 0; i < strlen(string); i++){
            string[i] = tolower(string[i]);
        }
        if(string[0] >= 'a' && string[0] <= 'z' ){
            printf("kata");
            return 0;
        }
        else{
            printf("bilangan bulat positif");
            return 0;
        }
    }
    free(string);

}