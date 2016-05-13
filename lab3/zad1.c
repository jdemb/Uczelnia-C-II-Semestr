/*
Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala

    ilość bajtów, przeznaczonych na zmienną (operator sizeof),
    największą i najmniejszą wartość liczby,
    ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
    ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce
    */
#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{
  FILE *fp;
    if ((fp=fopen("zapis.txt", "w"))==NULL)
	  {
       printf ("Nie moge otworzyc pliku do zapisu!\n");
       return;
    }


  int ziarno, precyzja;
  fprintf(fp,"|typ        |                  min|                  max|    ziarno| prec|we/wy|\n");
  fprintf(fp,"|------------------------------------------------------------------------------|\n");
  // short
  short min,max;
  min=SHRT_MIN;
  max=SHRT_MAX;
  fprintf(fp,"|short      | %20i| %20i|          |     | i   |\n",min,max);
  // int
  int mini,maxi;
  mini=INT_MIN;
  maxi=INT_MAX;
  fprintf(fp,"|int        | %20d| %20d|          |     | d   |\n",mini,maxi);
  // long
  long minl,maxl;
  minl=INT_MIN;
  maxl=INT_MAX;
  fprintf(fp,"|long       | %20li| %20li|          |     | li  |\n",minl,maxl);
  // long long
  long long minll, maxll;
  minll=LLONG_MIN;
  maxll=LLONG_MAX;
  fprintf(fp,"|long long  | %20lli| %20lli|          |     | lli |\n",minll,maxll);
  // float
  ziarno=FLT_EPSILON;
  precyzja=FLT_DIG;
  fprintf(fp,"|float      |              3.4E-38|              3.4E+38|       %d  |   %d | f   |\n",ziarno,precyzja);
  // double
  ziarno=DBL_EPSILON;
  precyzja=DBL_DIG;
  fprintf(fp,"|double     |             1.7E-308|             1.7E+308|       %d  |  %d | lf  |\n",ziarno,precyzja);
  // long double
  ziarno=LDBL_EPSILON;
  precyzja=LDBL_DIG;
  fprintf(fp,"|long double|             1.7E-308|             1.7E+308|       %d  |  %d | Lf  |\n",ziarno,precyzja);
  fprintf(fp,"|------------------------------------------------------------------------------|\n");
  fclose (fp);
}
