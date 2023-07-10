#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct
struct staff {
    char name[32];
    int age;
    float iq;
};

//Define your function
void show_struct(struct staff p);
struct staff fetchStruct(void);

int main()
{

/*  move this to a struct function
    struct staff staff_1;
    strcpy(staff_1.name, "Joseph Akinboyede");
    staff_1.age = 30;
    staff_1.iq = 300.56;*/

    show_struct(fetchStruct());

    return 0;
}

struct staff fetchStruct(void){
    static struct staff staff_1;
    strcpy(staff_1.name, "Joseph Akinboyede");
    staff_1.age = 32;
    staff_1.iq = 300.56;

    return(staff_1);
}

void show_struct(struct staff p){
    printf("%s is %d old\n", p.name, p.age);
    printf("%s level of IQ is %.2f\n", p.name, p.iq);
}
