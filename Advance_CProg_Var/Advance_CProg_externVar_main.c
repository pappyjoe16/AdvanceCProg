#include <stdio.h>

void displayData(void);
void manipulateDate(void);

int data[5] = {2, 3, 5, 7, 9};
int dataSize = sizeof(data) / sizeof(data[0]);

int main(){
    printf("Number of elements in the array is %d\n\n", dataSize);
    printf("Number of elements in the array is %2d\n\n", dataSize);
    displayData();
    manipulateDate();
    displayData();

    return (0);
}
