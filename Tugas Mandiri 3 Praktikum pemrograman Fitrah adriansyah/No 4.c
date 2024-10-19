#include <stdio.h>

int main() {
    int bilangan;

    // Menginput nilai bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Mengecek apakah bilangan tersebut positif
    if (bilangan <= 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
        return 1; // Keluar dari program jika input tidak valid
    }

    // Mengecek ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}

