#include<stdio.h>

int main()
{
    int a,b;
    printf("a = 5, a b = 3 \n");
    a=5; b=3;
    b = ( a += 2);
    printf("po zmianie b wynosi: %d\n", b);
    a = (b %= 3) + (b %= 4);
    printf("po zmianie a wynosi: %d\n", a);
    b = (b %= 3) + (b %= 4) + ( a += 2);
    printf("po magicznej zamianie b wynosi: %d\n", b);


return 0;
}
