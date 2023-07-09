#include <stdio.h>

void displayData(void);
void manipulateDate(void);

extern int data[];
extern int dataSize;


void displayData(void){
   int x;
   printf("Data set: \n");
   for (x=0; x<dataSize; x++)
        printf("%2d\t", data[x]);
   putchar('\n');

}

void manipulateDate(void){
    int x;
    for (x=0; x<dataSize; x++)
        data[x] = data[x]+2;
}
