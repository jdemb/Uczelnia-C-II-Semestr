
//Zadanie 3:
//Program potrzebuje czytania wielu danych rzeczywistych i ca³kowitych z klawiatury;
//za ka¿dym razem powinien napisaæ na monitorze, jakiej zmiennej potrzebuje i poczekaæ, a¿ u¿ytkownik wpisze odpowiedni¹ dan¹.
//Napisaæ makrodefinicjê CZYT, która to realizuje.
//Na przyk³ad wywo³anie makra  CZYT(a,lf)  powinno spowodowac wydruk
   //Podaj wartosc a :
//a nastêpnie wczytanie liczby rzeczywistej do zmiennej a.
//Oczywiœcie jeœli drugim argumentem makra jest   i , to chodzi o wczytanie liczby ca³kowitej. 

#include <stdio.h>
#define WCZYT(x, y) printf("Podaj wartosc "#x": "); scanf("%"#y, &x);

int main(){
  int a;
  double b;
  WCZYT(a, i);
  WCZYT(b, lf);
}
