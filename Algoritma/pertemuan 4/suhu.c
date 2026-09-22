#include <stdio.h>
    int main() {
        float celcius, fahrenheit;
        // Input
        printf("Masukkan Suhu Celcius ");
        scanf("%f", &celcius);

        fahrenheit = (celcius * 9/5) + 32. ;

        // Output
        printf("Hasil Konversi Celcius Ke Fahrenheit: %.2f\n",fahrenheit);
    return 0;
    }
