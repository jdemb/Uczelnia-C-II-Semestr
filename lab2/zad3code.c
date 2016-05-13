/*
.zw. ,,blokowe'' algorytmy szyfrujące kodują jednocześnie całe bloki tekstu, znacznie dłuższe niż pojedyncze litery.

Napisać program szyfrujący oraz współpracujący z nim program odszyfrowujący, działające w następujący sposób:

    wczytany tekst jest dzielony na grupy po 4 kolejne znaki; każda taka grupa szyfrowana jest oddzielnie;
    taką grupę traktuje się jak pojedynczą liczbę całkowitą; poddaje się ją jakiejś różnowartościowej funkcji matematycznej (,,kluczowi'' szyfru); np.
        n → −n     albo
        n → (n+k)%232   gdzie k jest ustaloną liczbą całkowitą;
    otrzymany ciąg liczb przesyła się adresatowi;
    każdą otrzymaną liczbę adresat odszyfrowuje funkcją odwrotną do klucza, a następnie rozbija na 4 znaki; te znaki drukuje.
*/
#include <stdio.h>
#include <stdlib.h>

int klucz(int n)
{
    return -n;
}

int pakowanie(int tab[4])
{
    int pak=0,i;
    for(i=0; i<4; i++)
        pak=(pak<<8)|(tab[i]&255);
    return pak;
}

int main()
{
    int i=0; int tab[4];
    tab[i]=(int)getchar();
    while(tab[i] != EOF)
    {
        i++;
        if(i==4)
        {
            printf("%i\n", klucz(pakowanie(tab)));
            i=0;
        }
        tab[i]= (int)getchar();
    }
    if(i>0)
    {
        int j;
        for(j=i;j<4; j++)
        tab[j]=' ';
        printf("%i\n",klucz(pakowanie(tab)));
    }
}
