/*
Deskripsi
Setelah sukses dengan detektor palindrom, kali ini Budi mencoba membuat alat baru yang dapat memanipulasi suatu string. Alat baru ini akan menerima suatu string S, dan memiliki 2 fungsi:

Diberikan A dan B, menukar karakter ke-A dan ke-B.
Diberikan L dan R, membalik substring pada rentang [L,R]. Sebagai contoh, jika S = "abcd", L = 1, dan R = 4, maka S' = "dcba".
Perhatikan bahwa disini indeks dimulai dari 1, dan hasil operasi-operasi tersebut bersifat permanen. Untuk mengetesnya, Budi akan melakukan Q buah operasi. Untuk mengetahui kebenaran alat yang Budi buat, ia meminta anda untuk mencari tahu hasil Q buah operasi tersebut. Bantulah Budi!

Format Masukan
Baris pertama berisi dua buah bilangan bulat, N dan Q, masing-masing menyatakan panjang string dan banyak operasi.

Baris kedua berisi sebuah string S, yang memiliki panjang N.

Q baris berikutnya berisi salah satu dari dua operasi berikut:

1 A B, yang menyatakan operasi menukar karakter.
2 L R, yang menyatakan operasi membalik substring.
Format Keluaran
Satu baris berisi sebuah string hasil semua operasi tersebut pada S.

Contoh Masukan
5 2
abcde
1 1 2
2 1 5
Contoh Keluaran
edcab
Batasan
2 ≤ N ≤ 1.000
1 ≤ Q ≤ 1.000
1 ≤ A < B ≤ N
1 ≤ L < R ≤ N
*/

#include <stdio.h>
#include <stdlib.h>

char *Tukar(int a, int b, char **string){
    int indexA = a-1;
    int indexB = b-1; 
    char temp = (*string)[indexA];
    (*string)[indexA] = (*string)[indexB];
    (*string)[indexB] = temp;
    return *string; 

}

char *Balik(int a, int b, char **string){
    int indexA = a-1;
    int indexB = b-1; 
    
    while(indexA <= indexB){
        if(indexA == indexB){
            (*string)[indexA] = (*string)[indexA];
            break;
        }
        else{
        char temp = (*string)[indexA];
        (*string)[indexA] = (*string)[indexB];
        (*string)[indexB] = temp;
        }
        indexA++;
        indexB--;
    }
    
    return *string;


}

int main(){
    int Banyaknya_char, Banyaknya_Operasi;
    scanf("%d %d", &Banyaknya_char, &Banyaknya_Operasi);
    char *string = (char *)malloc(sizeof(char) * (Banyaknya_char + 1));
    scanf("%s", string);


    for(int i = 0; i < Banyaknya_Operasi; i++){
        int operasi;
        int A;
        int B;
        scanf("%d %d %d", &operasi, &A, &B);
        if(A < B){
            if(operasi == 1){
                string = Tukar(A, B, &string);
            }
            else{
                string = Balik(A, B, &string);
            }
        }
        else{
            break;
        }

    }
    printf("%s", string);
    free(string);
    return 0;
}
