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
    return 0;
}
