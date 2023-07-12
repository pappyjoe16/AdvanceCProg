#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int f[5] = {13,15,17,19,21};
    int x;
    int *pf;
    pf = f;
    printf("This is to increase the value in the address\n");
    for (x=0; x<5; x++){

        printf("%d\t", *pf); // Get the value in the address
        ++*pf; //increasing the value in the address

    }
    printf("\nThis is to increase the address\n");
    for (x=0; x<5; x++){

        printf("%d\t", *pf); // Get the value in the address
        pf++; //increasing the address

    }
    printf("\n");
    challenge();

    return 0;
}

void challenge(void){
    char name[] = "Joseph Akinboyede";
    int lenght = strlen(name);
    char *pname;
    int x;
    int size;
    pname = name;
   // size = sizeof(char);
    //printf("this is the size of char %d\n", size);
    for(x=0; x<lenght; x++){
        printf("%c", *(pname+x)); //point math method
        //pname++;
    }
}
