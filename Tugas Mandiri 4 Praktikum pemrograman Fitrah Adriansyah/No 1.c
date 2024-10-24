#include <stdio.h>

int main() {
    int bilangan;

    // Menginput bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memastikan bilangan yang dimasukkan positif
    if (bilangan <= 0) {
        printf("Harap masukkan bilangan bulat positif.\n");
        return 1;
    }

    // Mengecek apakah bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan genap.\n", bilangan);
    } else {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    }

    return 0;
}

