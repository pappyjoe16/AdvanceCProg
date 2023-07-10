#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[32];
    int age;
};
struct employee *allocateStruct(void);
void showStruct(struct employee *p);
void fetchStruct(struct employee *p);

int main()
{
    struct employee *employee_1;
    employee_1 = allocateStruct();
    fetchStruct(employee_1);
    showStruct(employee_1);

    return 0;
}
struct employee *allocateStruct(void){
    struct employee *p;
	p = (struct employee *)malloc(sizeof(struct employee));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}
void fetchStruct(struct employee *p){
    char employee_N[32];
    int employee_A;

    printf("Enter the name of the employee: ");
    fgets(employee_N, 32, stdin);
    printf("Enter the employee age: ");
    scanf("%d", &employee_A);


    //strcpy(p->name, employee_N);
   // p->age =  employee_A;


}
void showStruct(struct employee *p){
    printf("Name of the employee is %s\n", p->name);
    printf("Age of the employee is %d\n", p->age);
}
