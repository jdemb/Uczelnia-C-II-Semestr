/*
    program w C, który wczytuje liczbę naturalną i przekazuje systemowi operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3;
    skrypt bashowy, który uruchamia powyższy program, przechwytuje wartość przekazaną systemowi i drukuje ją.
*/


#include<stdio.h>

int main()
{
    int n;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &n);
    int wynik=n%3;
    printf("%d modulo 3 to %d\n", n,wynik);
    return 0;
}
