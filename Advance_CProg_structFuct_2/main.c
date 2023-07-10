#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct staff {
    char name[32];
    int age;
    float iq;
};
struct staff *allocateStruct(void);
void fetchStruct(struct staff *p);
void showStruct(struct staff *p);

int main()
{
    struct staff *staff_1;
    staff_1 = allocateStruct();
    fetchStruct(staff_1);
    showStruct(staff_1);

    return 0;
}
struct staff *allocateStruct(void){
    struct staff *p;
	p = (struct staff *)malloc(sizeof(struct staff));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}

void fetchStruct(struct staff *p){

    strcpy(p->name, "Joseph Akinboyede");
    p->age = 32;
    p->iq = 300.56;

}

void showStruct(struct staff *p){
    printf("%s is %d old\n", p->name, p->age);
    printf("%s level of IQ is %.2f\n", p->name, p->iq);
}
