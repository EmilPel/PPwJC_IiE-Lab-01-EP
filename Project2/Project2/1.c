#include <stdio.h>

void zad5(int n) {
    if (n > 1) {
        zad5(n / 2);
    }
    printf("%d", n % 2);
}

int zad6(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return zad6(n - 1) + zad6(n - 2);
    }
}

void zad8(int x, int n) {
    if (n == 1) {
        printf("Wynik: %d\n", x);
        return;
    }

    if (n % 3 == 0) {
        int k = zad8(x, n / 3);
        printf("Wynik: %d\n", k * k * k);
    }
    else {
        int result = x * zad8(x, n - 1);
        printf("Wynik: %d\n", result);
    }
}

int zadanie1(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * zadanie1(n - 1);
    }
}

int zadanie2(int n) {
    if (n == 1) {
        return -1;
    }
    else {
        return -zadanie2(n - 1) * (n - 2);
    }
}

int main() {
   /*
    int n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nie można obliczyć silni dla liczby ujemnej.\n");
    }
    else {
        unsigned long long int result = zadanie1(n);
        printf("Silnia z %d wynosi: %llu\n", n, result);
    }

    return 0;
    */
    /* Zadanie 5
    printf("Podaj liczbę dziesiętną: ");
    scanf_s("%d", &liczba);

    printf("Liczba w systemie dwójkowym: ");
    zad5(liczba);
    printf("\n");
    
    return 0;
    */

    /* Zadanie 6
    int liczba_elementow;

    printf("Podaj liczbę elementów ciągu Fibonacciego do wygenerowania: ");
    scanf("%d", &liczba_elementow);

    printf("Ciąg Fibonacciego: ");
    for (int i = 0; i < liczba_elementow; i++) {
        printf("%d ", zad6(i));
    }
    printf("\n");

    return 0;
    */

    /* Zadanie 8
    int x, n;

    printf("Podaj x: ");
    scanf("%d", &x);

    printf("Podaj n: ");
    scanf("%d", &n);

    zad8(x, n);

    return 0;
    */
    /*
    int n;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Podano n mniejsze lub równe zero. Nie można obliczyć.\n");
    }
    else {
        int result = zadanie2(n);
        printf("Wartość %d-tego wyrazu ciągu wynosi: %d\n", n, result);
    }
    return 0;
    */


}