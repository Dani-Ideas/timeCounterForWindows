#include <stdio.h>
#include <unistd.h>

int n = 20, carroDentro;
int main()
{
    carroDentro = 0 ;
    printf("preciona el 1 para ingresar al estacionamiento");
    scanf("%d", &carroDentro);
    if (carroDentro ==1)
    {
        while (n>10)
    {
        printf("n es igual a %d\n", n);
        n=n-1;
    }
    printf("ya se salio del bucle porque n es igual a 10");
    }
    else
    {
        printf("Bueno supongo que no deceas entar al estacionamiento hasta pronto👋\n");
    }
    return 0;
}
/*

*/