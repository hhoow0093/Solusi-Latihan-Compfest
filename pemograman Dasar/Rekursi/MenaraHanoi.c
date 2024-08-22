/*
Deskripsi
Apakah anda tahu tentang Menara Hanoi? Menara Hanoi merupakan permainan dengan 3 tiang dan N cakram, yang ukurannya berbeda-beda semua. Awalnya, semua cakram berada pada salah satu tiang, dan terurut, dengan cakram terbesar berada di paling bawah dan cakram terkecil berada di paling atas. Sebut saja tiang ini tiang A, dan dua tiang lainnya tiang B dan tiang C. Tujuan permainan ini adalah memindahkan N cakram tersebut ke tiang C dengan aturan berikut:

 

Pada satu waktu, hanya satu cakram yang boleh dipindahkan.
Cakram yang boleh dipindahkan merupakan cakram yang berada di posisi paling atas salah satu tiang. Cakram akan dipindahkan ke posisi paling atas salah satu tiang yang lain.
Pada saat memindahkan, cakram yang dipindahkan tidak boleh lebih besar dari cakram teratas tiang tujuan.
 

Tentunya, pada akhirnya cakram-cakram itu akan terurut seperti semula, hanya saja berada pada tiang C. Diberikan N, banyak cakram, anda harus mengeluarkan solusi pemindahan cakram-cakram tersebut yang membutuhkan langkah paling sedikit.

Format Masukan
Satu baris berisi sebuah bilangan bulat N, banyaknya cakram. Cakram-cakram tersebut memiliki ukuran 1 sampai N.

Format Keluaran
Beberapa baris, dengan setiap baris memiliki format "X Y Z", yang berarti memindahkan cakram berukuran X dari puncak tiang Y ke puncak tiang Z.

Contoh Masukan
3
Contoh Keluaran
1 A C
2 A B
1 C B
3 A C
1 B A
2 B C
1 A C
Batasan
1 ≤ N ≤ 10
*/

#include <stdio.h>
void TowerOfHanoi(int cakram, char a, char b, char c){
    if(cakram > 0){
        //move a to b using c for all disk except the biggest one
        TowerOfHanoi(cakram - 1, a, c, b);
        // printing every statement in-order traversal
        printf("%d %c %c\n", cakram, a, c );
        //move b to c using a after the biggest one is in c
        TowerOfHanoi(cakram - 1, b, a, c);
    }

}

int main(){
    int N;
    scanf("%d", &N);
    TowerOfHanoi(N, 'A', 'B', 'C');
    return 0;
}