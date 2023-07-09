#include <stdio.h>
#include <stdlib.h>

#define CHECK(num) ((num %2) ? ("odd") : ("even"))
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    CHECK(num);
    printf("The number you enter is %s", CHECK(num));

    return 0;
}
