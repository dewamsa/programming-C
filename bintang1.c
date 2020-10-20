#include<stdio.h>

int main(){
    //Deklarasi
    int N;

    //Masukkan nilai N
    printf("Masukkan nilai N: ");
    scanf("%d",&N);


    for(int baris=0;baris<N;baris++){ //perulangan untuk membuat baris baru
        for(int kolom=0;kolom<=baris;kolom++){ //perulangan untuk membuat bintang
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
