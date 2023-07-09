#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    float c, root;
    a = 10; b = 4;
    c = (float)a/b; // This is called typecasting. Casting integer to float
    printf("%d/%d = %f\n", a,b,c);
    root = square_root();
    printf("Square Root of %d is %f\n", a,root);
    return 0;
}

int square_root(void){
    int a;
    float root;
    printf("Enter a Integer number: ");
    scanf("%d", &a);
    root = sqrt(a);// This is using absolute value function to convert negative to positive
    printf("Square Root of %d is %f\n", a,root);
    return ((int)(root));
}
