#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{
  int ziarno, precyzja;
  printf("typ         min           max           ziarno prec we/wy\n");
  // short
  short min,max;
  min=SHRT_MIN;
  max=SHRT_MAX;
  printf("short   %10i %10i    i\n",min,max);
  // int
  int mini,maxi;
  mini=INT_MIN;
  maxi=INT_MAX;
  printf("int         %10d %10d    d\n",mini,maxi);
  // long
  long minl,maxl;
  minl=INT_MIN;
  maxl=INT_MAX;
  printf("long        %10li %10li    li\n",minl,maxl);
  // long long
  long long minll, maxll;
  minll=LLONG_MIN;
  maxll=LLONG_MAX;
  printf("long long   %10lli %10lli    lli\n",minll,maxll);
  // float
  ziarno=FLT_EPSILON;
  precyzja=FLT_DIG;
  printf("float 3.4E-38  3.4E+38 %d %d f\n",ziarno,precyzja);
  // double
  ziarno=DBL_EPSILON;
  precyzja=DBL_DIG;
  printf("double 1.7E-308 1.7E+308 %d %d lf \n",ziarno,precyzja);
  // long double
  ziarno=LDBL_EPSILON;
  precyzja=LDBL_DIG;
  printf("long double 1.7E-308 1.7E+308 %d %d Lf\n",ziarno,precyzja);




return 0;
}
