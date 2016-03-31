/*
Jakie będą wyniki następujących działań?

    5&3
    5|3
    7<<2&7
    7<<(2&7)
    ((-1)<<8)>>16
    13^9
*/
#include<stdio.h>

int main()
{
    int a;
    a=5&3;
    printf("%d\n", a); // 1
    a=5|3;
    printf("%d\n", a); // 7
    a=7<<2&7;
    printf("%d\n", a); // 4
    a=7<<(2&7);
    printf("%d\n", a); // 28
    a=((-1)<<8)>>16;
    printf("%d\n", a); // -1
    a=13^9;
    printf("%d\n", a); // 4





return 0;
}
