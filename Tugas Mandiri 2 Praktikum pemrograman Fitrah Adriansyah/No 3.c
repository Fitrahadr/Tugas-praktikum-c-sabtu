#include <stdio.h>
#include <math.h>

int main() {
    // Mendeklarasikan variabel
    double alas = 4.0; // panjang sisi alas
    double tinggi = 5.0; // panjang sisi tinggi
    double sisiMiring;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Menampilkan hasil
    printf("Sisi miring segitiga siku-siku dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm\n", alas, tinggi, sisiMiring);

    return 0;
}

