// Napisaæ makrodefinicjê PETLA, której wywo³anie
// PETLA(komenda1, warunek, komenda2)
// dzia³a tak, jak na schemacie obok (pêtla while ,,zroœniêta'' z pêtl¹ do...while).
// Na przyk³ad wywo³anie:
// a=0; b=0; i=0;
// PETLA(a++, i<5, b++; i++);
// powinno przypisywaæ zmiennej a wartoœæ 6, a zmiennej b wartoœæ 5.

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
