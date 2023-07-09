#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 1){
        int count;
        printf("You have %d argument passed\n", argc);
        for(count=0; count<argc; count++){
            printf("%d This is the argument passed %s \n", count+1 , argv[count]);
        }
    }else {
        printf("ERROR MESSAGE: You have not entered any argument\n");

    }

    return 0;
}
