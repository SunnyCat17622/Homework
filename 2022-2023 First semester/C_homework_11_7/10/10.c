#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long number;
    int jz = 2;
    printf("Enter an integer (q to quit):");
    while (scanf("%lu %d",&number,&jz))
    {
        printf("%d equivalent: ",jz);
        to_binary(number, jz);
        putchar('\n');
        printf("Enter an integer (q to quit):");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n, int jz)   /* µÝ¹éº¯Êý */
{
    int r;

    r = n % jz;
    if (n >= jz)
        to_binary(n / jz, jz);
    switch (jz)
    {
    case 2:
        putchar(r == 0 ? '0' : '1');
        break;
    case 8:
        printf("%o", r);
        break;
    case 16:
        printf("%x", r);
        break;
    }
    return;
}