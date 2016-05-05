// Napisa� makrodefinicj� PETLA, kt�rej wywo�anie
// PETLA(komenda1, warunek, komenda2)
// dzia�a tak, jak na schemacie obok (p�tla while ,,zro�ni�ta'' z p�tl� do...while).
// Na przyk�ad wywo�anie:
// a=0; b=0; i=0;
// PETLA(a++, i<5, b++; i++);
// powinno przypisywa� zmiennej a warto�� 6, a zmiennej b warto�� 5.

#include <stdio.h>
#define PETLA(komenda1, warunek, komenda2) komenda1; while(warunek){komenda2; komenda1;}
int main()
{
  int a=0, b=0, i=0;
  PETLA(a++, i<5, b++; i++);
  printf("%i\n", a);
  printf("%i\n", b);
  return 0;
}
