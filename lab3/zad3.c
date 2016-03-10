#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  printf("FLT_MAX => (int)FLT_MAX:\n%e => %i\n", FLT_MAX, (int)FLT_MAX);
  printf("DBL_MAX => (int)DBL_MAX:\n%e => %i\n", DBL_MAX, (int)DBL_MAX);
  printf("LDBL_MAX => (double)LDBL_MAX:\n%Le => %e\n", LDBL_MAX, (double)LDBL_MAX);
  printf("LLONG_MAX => (double)LLONG_MAX:\n%lli => %e\n", LLONG_MAX, (double)LLONG_MAX);
  printf("LLONG_MAX => (float)LLONG_MAX:\n%lli => %e\n", LLONG_MAX, (float)LLONG_MAX);
  return 0;
}
