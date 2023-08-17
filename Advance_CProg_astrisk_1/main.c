#include <stdio.h>
#include <stdlib.h>

void challenge(void){
    int num, x, *numb;
    printf("Enter a integer number: \n");
    scanf("%d", &num);
    printf("This is the integer number you entered number %d: \n", num);
    numb = &num;
    for(x=-1; x<10; x++){
        printf("This is the number %d: \n", *numb); //*numb is getting the value at the location
        ++*numb; //this increment the value in the pointer
        //*numb++ increment the address to something else
    }

}
int main()
{
    char *string = "greetings from GBTechworld\n";
    char *s;
    //s = string;
    while(*string !='\0'){
        putchar(*string++);
        //*s++;
    }

    challenge();
    return 0;
}