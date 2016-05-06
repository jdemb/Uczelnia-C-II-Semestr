#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  for(i=argc-1; i>0; i--)
  {
    if(i==argc-1)
    printf("%s", argv[i]);
    else
    printf (" %s", argv[i]);
  }
}
