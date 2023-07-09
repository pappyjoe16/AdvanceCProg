#include <stdio.h>
#include <stdlib.h>


#define SIZE 64
int compare(const void *a, const void *b);
int main()
{
    booble_f();
    qsort_f();

    return 0;
}
void booble_f(void){
    char string_arry[SIZE];
    int lenght, outer, inner, temp;

    printf("Enter some text: ");
    fgets(string_arry, SIZE, stdin);
    lenght = strlen(string_arry);

    printf("Unsorted string: %s\n", string_arry);

    for (outer=0; outer<lenght; outer++)
        for (inner=outer+1; inner<lenght; inner++){
            if(string_arry[outer] > string_arry[inner]){
                temp = string_arry[outer];
                string_arry[outer] = string_arry[inner];
                string_arry[inner] = temp;
            }
        }

    printf("Sorted string: %s\n", string_arry);
}
void qsort_f(void){
    char string_arry[SIZE];
    int lenght, outer, inner, temp;

    printf("Enter some text: ");
    fgets(string_arry, SIZE, stdin);
    lenght = strlen(string_arry);

    printf("Unsorted string: %s\n", string_arry);

    qsort(string_arry, lenght, sizeof(char), compare);

    printf("Sorted string: %s\n", string_arry);
}

int compare(const void *a, const void *b){
    return(*(char *)a - *(char *)b);
}

