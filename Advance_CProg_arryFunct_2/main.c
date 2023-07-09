#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);
void generate_2(int *b);

int main()
{
	int x;
	int *a;
	int b_arry[10];

	puts("Here are 10 random numbers:");
	a = generate();
	for(x=0;x<10;x++)
		printf(" %3d",a[x]);
	putchar('\n');

// Here is the second method which is the best practice
	generate_2(b_arry);
	for(x=0;x<10;x++)
		printf(" %3d",b_arry[x]);
	putchar('\n');

	return(0);
}

int *generate(void)
{
	static int array[10];
	int x;

	srand((unsigned)time(NULL));
	for(x=0;x<10;x++)
		array[x] = rand() % 100 + 1;

	return(array);
}

void generate_2(int *b)
{
	int x;

	srand((unsigned)time(NULL));
	for(x=0;x<10;x++)
		b[x] = rand() % 100 + 1;

}
