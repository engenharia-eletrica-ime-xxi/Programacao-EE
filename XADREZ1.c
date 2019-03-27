#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i=1;
    printf("_________________________________________________________________\n");
    printf("|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|\n");
    printf("|  TP \t|  CP \t|  BP \t|  DP \t|  RP \t|  BP \t|  CP \t|  TP \t|\n");
    printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");
    printf("|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|\n");
    printf("|  PP \t|  PP \t|  PP \t|  PP \t|  PP \t|  PP \t|  PP \t|  PP \t|\n");
    for(i=3;i<=6;i++)
    {
        if (i%2==0){
             printf("|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|\n");
             printf("|     \t|     \t|     \t|     \t|     \t|     \t|     \t|     \t|\n");
        }
        else{
            printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");
    printf("|b  \t|p  \t|b  \t|p  \t|b  \t|p  \t|b  \t|p  \t|\n");
    printf("|   \t|   \t|   \t|   \t|   \t|   \t|   \t|   \t|\n");
    printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");
        }
    }

    printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");
    printf("|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|\n");
    printf("|  PB \t|  PB \t|  PB \t|  PB \t|  PB \t|  PB \t|  PB \t|  PB \t|\n");
    printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");
    printf("|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|p    \t|b    \t|\n");
    printf("|  TB \t|  CB \t|  BB \t|  DB \t|  RB \t|  BB \t|  CB \t|  TB \t|\n");
    printf("|_______|_______|_______|_______|_______|_______|_______|_______|\n");


    return 0;
}

