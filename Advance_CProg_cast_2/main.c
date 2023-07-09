#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int r, num;
    printf("Enter a integer value: ");
    scanf("%d", &num);
    srand((unsigned)time(NULL)); // casting to
    r = rand()% 100+ 1;
    printf("%d is a random number. \n", r);
    cast_malloc();
    challenge_test(num);

    return 0;
}
void cast_malloc(void){
    int *m;
    m = (int *)malloc(16 * sizeof(int));
    if(m == NULL)
        puts("Failed to allocate memory\n");
    else
        printf("Storage for 16 integers allocated, m = %d\n", m);

}
 void challenge_test(int num){
     float cast_num;
     cast_num = (float)num;
     printf("This is the Entered number in floating point %d = %.1f\n", num , cast_num);
 }
