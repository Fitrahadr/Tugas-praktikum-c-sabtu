#include <stdio.h>
#include <math.h>

int main() {
    // Mendeklarasikan variabel
    double alas, tinggi, sisiMiring;

    // Input panjang alas dan tinggi
    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%lf", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Sisi miring segitiga siku-siku dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm\n", alas, tinggi, sisiMiring);

    return 0;
}

