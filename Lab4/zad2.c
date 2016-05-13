#include <stdio.h>
#include <complex.h>
#include <math.h>

int main(){

  double complex imaginalis = 0 - 1*I;
  double complex tozsamosc = cpow(M_E, M_PI*imaginalis);
  printf("\nTozsamosc Eulera: (e^(pi*i))+1 = %lf\n", creal(tozsamosc)+cimag(tozsamosc)+1); //tozsamosc Eulera spelniona drukuje -0 

  //Podnoszenie do potegi urojonej
  int r = 5;
  //e^ri = cos(r) + sin(r)*i
  double complex potega_urojona = cos(r) + imaginalis*sin(r);
  printf("e^%di = %lf + %lf\n", r, creal(potega_urojona), cimag(potega_urojona)); //https://www.wolframalpha.com/input/?i=e^%285i%29
  //powinno sie rownac 0.283662 + 0.958924i

  //Podnoszenie do potegi zespolonej
  //e^z  =  ∑k=0∞ zk/k!
  double complex liczba_zespolona = r + r*I;
  double complex potega_zespolona = cpow(M_E, liczba_zespolona);
  printf("e^(%d + %d * I) = %lf  %+lf", r, r, creal(potega_zespolona), cimag(potega_zespolona));//https://www.wolframalpha.com/input/?i=e^%285%2B5i%29
  //Powinno byc 42.099201  -142.316981


}
