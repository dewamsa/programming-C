#include<stdio.h>

int main(){
    //Deklarasi variabel
    int num_mhs = 0;
    int max_mhs = 10; //inisialisasi jumlah maksimum mahasiswa yang dapat diinputkan
    float nilai[10];
    float max = 0; //inisialisasi nilai mahasiswa terbesar
    float min = 100; //inisialisasi nilai mahassiwa terkecil

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d",&num_mhs);

    if(num_mhs>max_mhs || num_mhs<1){
        printf("Jumlah mahasiswa minimum adalah 1 dan maksimum adalah %d",max_mhs);
    }
    else{
        printf("Masukkan nilai %d mahasiswa:\n",num_mhs);
        for(int i=0;i<num_mhs;i++){
            printf("Nilai mahasiswa ke-%d: ",i+1);
            scanf("%f",&nilai[i]);
        }

        //Mencari nilai terbesar dan terkecil dari nilai mahasiswa
        for(int i=0; i<num_mhs;i++){
            if(nilai[i]>max){
                max = nilai[i];
            }
            if(nilai[i]<min){
                min = nilai[i];
            }
        }
        printf("Nilai terkecil: %f",min);
        printf("\nNilai terbesar: %f",max);
    }

    return 0;
}
