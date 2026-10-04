#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai tes kamu: ");
    scanf("%d", &nilai);

    // Mengecek apakah nilai berada dalam rentang 0 sampai 100
    if (nilai >= 0 && nilai <= 100) {
        if (nilai >= 85){
            printf("Your Grade : A");
            printf("Keterangan: lulus dengan kehormatan");
        }else if (nilai>=70){
            printf("Your Grade : B");
            printf("Keterangan : Lulus");
        }else if (nilai>=60){
            printf("Your Grade : C");
            printf("Keterangan : Lulus");
        }else if (nilai>=50){
            printf("Your Grade : D");
            printf("Keterangan : Lulus Bersyarat");
        }else{
            printf("Keterangan : Tidak Lulus");
        }
        
        
    }else {
        printf("Nilai tidak valid!\n");
    }

    return 0;
}