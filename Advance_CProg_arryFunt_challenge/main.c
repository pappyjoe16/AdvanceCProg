#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 50
void arry_mod(char *in_arry);
int main()
{
    char arry_in[SIZE];
    int lenght,x;

    printf("Enter some text: ");
    fgets(arry_in, SIZE, stdin);

    printf("this this is the modified string %s\n", arry_in);

    arry_mod(arry_in);

    printf("this this is the modified string %s\n", arry_in);

    return (0);
}

void arry_mod(char *in_arry){
    int x = 0;
/*    int length;
    length = strlen(in_arry);*/
    while(in_arry[x]){
        in_arry[x] = toupper(in_arry[x]);
        if(in_arry[x] == ' ')
            in_arry[x] = '_';
        x++;

    }

/*    // Another method
      for(x=0; x<length; x++){
         in_arry[x] = toupper(in_arry[x]);
          if(in_arry[x] == ' ')
              in_arry[x] = '_';
      }
 */

}
