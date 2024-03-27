#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
        printf("\n Largest : %d", a);
    else if (b >= a && b >= c && b >= d)
        printf("\n Largest : %d", b);
    else if (c >= a && c >= b && c >= d)
        printf("\n Largest : %d", c);
    else
        printf("\n Largest : %d", d);
    printf("\n");


    if (a <= b && a <= c && a <= d)
        printf("\n Smallest : %d", a);
    else if (b <= a && b <= c && b <= d)
        printf("\n Smallest : %d", b);
    else if (c <= a && c <= b && c <= d)
        printf("\n Smallest : %d", c);
    else
        printf("\n Smallest : %d", d);
    return 0;

}