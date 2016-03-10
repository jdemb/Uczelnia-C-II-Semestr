#include <stdio.h>
#include <stdlib.h>

void na_binarne(int z)
{
  int tab[8];
  int i=0;
  while(x!=0)
  {
    tab[i]=x%2;
    x=x/2;
    i++;
  }
  while(i>0)
  {
    i--;
    printf("%i", tab[i]);
  }
  printf("\n");
}
int main()
{
  char z;
  z=getchar();
  while(z!=EOF)
  {
    if(z!='\n') dec_bin(z);
    z=getchar();
  }
  return 0;
}
