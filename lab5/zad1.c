#include<stdio.h>

void iloraz_reszta(int a, int b,int *q, int *r);
{
    *q = a/b;
    *r = a%b;
}

int main()
{
	int n, k, r, q;
	printf("Podaj liczbe calkowita 'n' : ");
	scanf("%i", &n);
	printf("Podaj liczbe calkowita 'k', k=/=0 : ");
	scanf("%i", &k);
	iloraz_reszta(&q, &r, n, k);
	printf("Iloraz calkowity : %i\n", q);
	printf("Reszta z dzielenia : %i\n", r);
}


