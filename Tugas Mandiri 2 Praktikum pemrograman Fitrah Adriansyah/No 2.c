#include <stdio.h>
#include <math.h>

int main() {
    // Mendeklarasikan variabel
    double diameter = 15.0;
    double radius;
    double volume;

    // Menghitung radius
    radius = diameter / 2.0;

    // Menghitung volume bola (V = 4/3 * p * r^3)
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Menampilkan hasil
    printf("Volume bola dengan diameter %.2f cm adalah: %.2f cm^3\n", diameter, volume);

    return 0;
}

