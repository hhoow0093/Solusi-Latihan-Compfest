/*
Deskripsi
Anda sedang terjebak di sebuah maze yang untungnya, tidak terlalu besar. Maze ini berbentuk persegi panjang berukuran N*M, dan terdiri dari petak-petak berukuran 1*1. Sehingga, terdapat N baris dan M kolom di maze ini. Pojok kiri atas berada di petak (1,1), sedangkan kanan bawah berada di petak (N,M). Maze ini cukup aneh, karena di dalam maze ini, anda hanya dapat berpindah ke petak yang berada tepat di kanan atau tepat di bawah (tentunya jika petak itu ada!). Saat ini, anda berada di pintu masuk, alias petak (1,1). Pintu keluar berada di petak (N,M). Tentukan, ada berapa cara berbeda anda bisa mencapai pintu keluar?

Format Masukan
Satu baris berisi 2 buah bilangan bulat N dan M, yang menyatakan ukuran maze.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, banyak cara mencapai pintu keluar.

Contoh Masukan
3 2
Contoh Keluaran
3
Batasan
1 ≤ N, M ≤ 10
*/

#include <stdio.h>

long long faktorial(long long nomor){
    if(nomor == 1 || nomor == 0){
        return 1;
    }
    else{
        return nomor * faktorial(nomor -1);
    }
}

int main(){
    long long N, M;
    scanf("%lld %lld", &N, &M);
    long long TitikAwal = 1;
    long long irisanGridSudut = 1;
    long long Total_Langkah = N + M - TitikAwal - irisanGridSudut;
    long long CaraKeKanan = N - TitikAwal;
    long long CaraKeBawah = M - irisanGridSudut; 
    long long JumlahCara = faktorial(Total_Langkah) / (faktorial(CaraKeBawah) * faktorial(CaraKeKanan));
    printf("%lld", JumlahCara);
    return 0;

}