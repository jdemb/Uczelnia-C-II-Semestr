//Napisać ,,czysty'' program, czyli bez efektów ubocznych, działający tak samo jak powyższa pętla for.
#include<stdio.h>

int main()
{
    char z;
    while(scanf("%c", &z))
    printf("%c", z);
return 0;
}
