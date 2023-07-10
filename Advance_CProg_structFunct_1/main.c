#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[32];
    int age;
    float iq;
};

void show_struct(struct person p);

int main()
{
    struct person joseph;
    strcpy(joseph.name, "Joseph Akinboyede");
    joseph.age = 30;
    joseph.iq = 300.56;

    show_struct(joseph);

    return 0;
}

void show_struct(struct person p){
    printf("%s is %d old\n", p.name, p.age);
    printf("%s level of IQ is %.2f\n", p.name, p.iq);
}
