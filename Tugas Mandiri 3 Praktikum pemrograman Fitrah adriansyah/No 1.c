#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    double alas, tinggi, luas, keliling, sisiMiring;

    // Input panjang alas dan tinggi
    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%lf", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menghitung keliling segitiga
    keliling = alas + tinggi + sisiMiring;

    // Menampilkan hasil
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}

