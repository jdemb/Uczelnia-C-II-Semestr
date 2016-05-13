
#include <stdio.h>
#include <stdlib.h>

int klucz(int n)
{
    return -n;
}

int wypisz(int n)
{
    int tab[4],i;
    for(i=0; i<4; i++)
    {
       tab[i] = n&255; n >>= 8;
    }
    for(i=3; i>=0; i--)
        printf("%c", (char)tab[i]);
}

int main()
{
    int n, m;
    m=scanf("%i", &n);
    while(m==1)
    {
        wypisz(klucz(n));
        m=scanf("%i", &n);
    }
    printf("\n");
}
