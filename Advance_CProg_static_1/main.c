#include <stdio.h>
#include <stdlib.h>

void f()
{
    static int x = 1;
    //x = 0;
    printf("Value of x is %d\n\n", x);
    x++;
    printf("Value of x is %d\n\n", x);

    return 0;
}
char *repeart(char r){
    int x;
    static char string[32];
    for(x=0; x<32; x++)
        string[x] = r;
        string[x] = '\0';

    return string;
}

int main()
{
    int *arry ;
    int i;
    char c;
    f();
    f();
    printf("Enter a Character: ");
    scanf("%c", &c);
    printf("This is the character you entered\n %s\n", repeart(c));

    arry = challenge_test();
    for(i=0; i<5; i++)
        printf("this is the arry %d\n", arry[i]);

    return 0;
}
int challenge_test(void){
    static int arry [] = {2, 3, 5, 7, 9};
    return (arry);
}
