#include <stdio.h>
#include <unistd.h>

int hours, minuts, seconds, timeLapsOnMiliseconds;

//int n = 20;
int main()
{
    timeLapsOnMiliseconds = 1000; //equal a 1 second

    for (hours = 0; hours < 24; hours++)
    {
        for (minuts = 0; minuts < 60; minuts++)
        {
            for (seconds = 0; seconds < 60; seconds++)
            {
                printf("%i:%i:%i\n",hours,minuts,seconds);
                usleep(timeLapsOnMiliseconds);
            }
            
        }
        
    } 
    //system ("pause");
    return 0;
}
/*
    while (n>10)
    {
        printf("n es igual a %d\n", n);
        n=n-1;
    }
    printf("ya se salio del bucle porque n es igual a 10");
*/