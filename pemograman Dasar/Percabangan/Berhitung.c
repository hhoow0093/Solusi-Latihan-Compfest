/*
Deskripsi
Terdapat 5 buah operator matematika:

penjumlahan, direpresentasikan dengan '+'.
pengurangan, direpresentasikan dengan '-'.
perkalian, direpresentasikan dengan '*'.
pembagian, direpresentasikan dengan '/'.
sisa hasil bagi, direpresentasikan dengan '%'.
Tugas anda kali ini adalah menggunakan operator-operator tersebut.

Format Masukan
Satu baris berisi A, operator, dan B, masing-masing dipisahkan sebuah spasi, yang menyatakan terdapat operasi "A operator B".

Format Keluaran
Satu baris berisi sebuah bilangan bulat, hasil "A operator B".

Contoh Masukan 1
1 + 1
Contoh Keluaran 1
2
Contoh Masukan 2
1000 * 1000
Contoh Keluaran 2
1000000
Batasan
1 ≤ A, B ≤ 1.000
Operator dijamin salah satu dari '+', '-', '*', '/', atau '%'.
Jika operator adalah '/', dijamin A habis dibagi B.

*/

#include <stdio.h>

int main(){
int a, b;
int result;
char operator;
scanf("%d %c %d", &a, &operator, &b);
    switch(operator){
    case '+':
    result = a + b;
    break;
    case '-':
    result = a - b;
    break;
    case '*':
    result = a * b;
    break;
    case '/':
    result = a / b;
    break;
    case '%':
    result = a % b;
    break;
    }
    printf("%d", result);
    return 0;
}