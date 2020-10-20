#include<stdio.h>

int main(){
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d",&N);
    for(int baris=0;baris<N;baris++){
        for(int kolom=0;kolom<=baris;kolom++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
