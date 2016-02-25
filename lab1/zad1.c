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