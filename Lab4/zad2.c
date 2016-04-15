#include <stdio.h>
#include <complex.h>
#include <math.h>
double complex epowzespolona(double complex z,double zreal,double zim)
{
	if(zreal==0)
	return epowim(zim);
	else
	return powz(z,100)/silnia(100);
	
}

double complex epowim(double r)
{
	return cos(r) + sin(r)i;
}

int silnia(int a)
{
	int i;
	for(i=a-1; i>1; i--)
	a*=i;
	return a;
}

double complex powz(double complex z,k)
{
	int i;
	for(i=1; i<k;i++)
	double complex multiply = z * z;
	return z;
}
int main() {

    double z1rea, z2rea, z1ima, z2ima;
    printf("Podaj rea z1 :\n");
    scanf("%lf",&z1rea);
    printf("Podaj ima z1 :\n");
    scanf("%lf",&z1ima);
    printf("Podaj rea z2 :\n");
    scanf("%lf",&z2rea);
    printf("Podaj ima z2 :\n");
    scanf("%lf",&z2ima);
    double complex z1 = z1rea + z1ima * I;
    double complex z2 = z2rea + z2ima * I;
    //Wypisanie liczb zespolonych
    printf("Wartosci: Z1 = %.2f + %.2fi, Z2 = %.2f + %.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    //Dodawanie liczb zespolonych
    double complex sum = z1 + z2;
    printf("Suma Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
    //Odejmowanie liczb zespolonych
    double complex difference = z1 - z2;
    printf("Roznica Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));
    //Mnożenie liczb zespolonych
    double complex multiply = z1 * z2;
    printf("Roznica Z1 * Z2 = %.2f %+.2fi\n", creal(multiply), cimag(multiply));



}
