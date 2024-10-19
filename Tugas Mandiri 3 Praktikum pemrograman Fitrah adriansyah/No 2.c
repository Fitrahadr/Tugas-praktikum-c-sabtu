#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    int celsius;
    double fahrenheit, reamur;

    // Input suhu dalam Celsius
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%d", &celsius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    reamur = celsius * 4.0 / 5.0;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

