#include <stdio.h>


int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Your input value is %f\n", num);
    num *= 5;
    printf("Answer is %f\n", num);
    num /= 3;
    printf("Answer is %f\n", num);
    return 0;
}

