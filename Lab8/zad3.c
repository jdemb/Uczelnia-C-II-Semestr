
//Zadanie 3:
//Program potrzebuje czytania wielu danych rzeczywistych i ca�kowitych z klawiatury;
//za ka�dym razem powinien napisa� na monitorze, jakiej zmiennej potrzebuje i poczeka�, a� u�ytkownik wpisze odpowiedni� dan�.
//Napisa� makrodefinicj� CZYT, kt�ra to realizuje.
//Na przyk�ad wywo�anie makra  CZYT(a,lf)  powinno spowodowac wydruk
   //Podaj wartosc a :
//a nast�pnie wczytanie liczby rzeczywistej do zmiennej a.
//Oczywi�cie je�li drugim argumentem makra jest   i , to chodzi o wczytanie liczby ca�kowitej. 

#include <stdio.h>
#define WCZYT(x, y) printf("Podaj wartosc "#x": "); scanf("%"#y, &x);

int main(){
  int a;
  double b;
  WCZYT(a, i);
  WCZYT(b, lf);
}
