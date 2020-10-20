#include<stdio.h>

int main(){
    int length_m= 0;
    int max_length = 100;
    float m1[max_length];
    float m2[max_length];

    float result = 0.0;

    printf("Masukkan panjang matriks 1D: ");
    scanf("%d",&length_m);

    printf("Masukkan nilai matriks M1: \n");
    for(int i=0;i<length_m;i++){
        printf("M1\[ %d \]:",i);
        scanf("%f",&m1[i]);
    }

    printf("Masukkan nilai matriks M2: \n");
    for(int i=0;i<length_m;i++){
        printf("M2\[ %d \]:",i);
        scanf("%f",&m2[i]);
    }

    for(int i=0;i<length_m;i++){
        result += m1[i]*m2[i];
    }

    printf("Hasil perkalian matriks 1D: %f",result);

    return 0;
}
