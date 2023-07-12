#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    double b;
    float c;
    int d[10];
    int *e;
    e = d;

    printf("Address of char variable 'a': %p\n", &a);
    printf("Address of double variable 'b': %p\n", &b);
    printf("Address of float variable 'c': %p\n", &c);
    printf("Address of int variable 'd': %p\n", &d[0]);
    printf("Address of int variable 'e': %p\n", e);

    return 0;
}
