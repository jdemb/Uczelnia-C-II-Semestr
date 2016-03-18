/*
Sprawdzić i wyjaśnić działanie następujących fragmentów programów:

      a = b = c = d = 0;

      for (i=0; i<N; a[i++]=i);

      for (i=0; i<N; a[++i]=i);

      i=1; while ((i*=2)<N);
*/
#include<stdio.h>

int main()
{
      int b,c,d,i;
      b = c = d = 0; //przypisanie wszystkim zmiennym wartosc 0
      int N=5,a[5]; //dla testu
      for (i=0; i<N; a[i++]=i);
      // dla kazdej komorki w tablicy o indeksie i przyjmujemy wartosc i
      for (i=0; i<N; a[++i]=i);
      // najpierw zwiekszamy indeks tablicy o jeden a potem przypisujemy wartosc i
      i=1; while ((i*=2)<N);
      // dopoki i jest mniejsze od n to jest mnozone przez 2




return 0;
}
