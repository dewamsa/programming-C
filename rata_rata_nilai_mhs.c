#include<stdio.h>

int main(){
    //Deklarasi
    int num_mhs = 0;
    int max_mhs = 10;
    float nilai[10];
    float mean = 0.0;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d",&num_mhs);

    //Kondisi agar jumlah mahasiswa yang dimasukkan berata pada rentang 1 - max_mhs
    if(num_mhs>max_mhs || num_mhs<1){
        printf("Jumlah mahasiswa minimum adalah 1 dan maksimum adalah %d",max_mhs);
    }
    else{
        printf("Masukkan nilai %d mahasiswa:\n",num_mhs);
        for(int i=0;i<num_mhs;i++){
            printf("Nilai mahasiswa ke-%d: ",i+1);
            scanf("%f",&nilai[i]); //Menyimpan nilai pada array nilai elemen ke-i
            mean += nilai[i]; //Menjumlahkan setiap nilai yang diinputkan oleh user
        }
        mean /= num_mhs; //merata-ratakan jumlah nilai mahasiswa
        printf("Nilai rata-rata mahasiswa adalah: %f",mean);

    }

}
