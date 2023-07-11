#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct weather{
        char day[10];
        float temp;
    };
    struct weather week[7] = {
        {"Sunday", 72.5},
        {"Monday", 72.5},
        {"Tuesday", 72.5},
        {"Wednesday", 72.5},
        {"Thursday", 72.5},
        {"Friday", 72.5},
        {"Saturday", 72.5}
    };
    int x;
    /*struct weather week[7];


    strcpy(week[0].day, "Sunday");
    week[0].temp = 72.5;
    strcpy(week[1].day, "Monday");
    week[1].temp = 68.4;
    strcpy(week[2].day, "Tuesday");
    week[2].temp = 75.0;
    strcpy(week[3].day, "Wednesday");
    week[3].temp = 73.8;
    strcpy(week[4].day, "Thursday");
    week[4].temp = 65.1;
    strcpy(week[5].day, "Friday");
    week[5].temp = 72.8;
    strcpy(week[6].day, "Saturday");
    week[6].temp = 75.2;*/

    puts("This week's forecast:");
    for(x=0; x<(strlen(week)); x++)
        printf("%10s %.1f degrees\n", week[x].day, week[x].temp);

    return 0;
}
