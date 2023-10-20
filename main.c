#include <stdio.h>

int main() {
    char operator;
    double bilangan1, bilangan2;

    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Masukkan bilangan pertama: ");
    scanf("%lf", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%lf", &bilangan2);

    double hasil;

    switch (operator) {
        case '+':
            hasil = bilangan1 + bilangan2;
            break;
        case '-':
            hasil = bilangan1 - bilangan2;
            break;
        case '*':
            hasil = bilangan1 * bilangan2;
            break;
        case '/':
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
            } else {
                printf("Pembagian oleh nol tidak diperbolehkan.\n");
                return 1;
            }
            break;
        default:
            printf("Operator yang dimasukkan tidak valid.\n");
            return 1;
    }
    
    printf("Hasil: %lf\n", hasil);
    return 1;
    printf (" Anda ingin coba lagi? [y/t] = ");
      scanf ("%c", &jawab);
      while (jawab=='y'||jawab=='Y');

    return 0;
}
